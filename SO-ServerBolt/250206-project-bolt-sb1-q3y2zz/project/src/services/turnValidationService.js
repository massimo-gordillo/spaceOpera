import { ACTION_TYPES } from '../types/gameTypes.js';

export class TurnValidationService {
  constructor(gameLogic) {
    this.gameLogic = gameLogic;
  }

  async validateTurn(initialState, actions, finalStateHash) {
    try {
      let currentState = { ...initialState };
      
      // Process each action sequentially
      for (const action of actions) {
        currentState = await this.processAction(currentState, action);
      }

      // For MVP, we'll just return true as we're not doing state validation yet
      return true;
    } catch (error) {
      console.error('Turn validation failed:', error);
      return false;
    }
  }

  async processAction(state, action) {
    switch (action.type) {
      case ACTION_TYPES.MOVE:
        return await this.gameLogic.processMove(state, {
          fromPosition: action.fromPosition,
          toPosition: action.toPosition,
          unitId: action.unitId
        });

      case ACTION_TYPES.ATTACK:
        return await this.gameLogic.processAttack(state, {
          attackerPosition: action.attackerPosition,
          targetPosition: action.targetPosition,
          unitId: action.unitId
        });

      case ACTION_TYPES.CAPTURE:
        return await this.gameLogic.processCapture(state, {
          unitPosition: action.unitPosition,
          targetPosition: action.targetPosition,
          unitId: action.unitId
        });

      case ACTION_TYPES.CREATE_UNIT:
        return await this.gameLogic.createUnit(state, {
          factoryPosition: action.factoryPosition,
          unitType: action.unitType,
          cost: action.cost
        });

      case ACTION_TYPES.SPEND_RESOURCES:
        return await this.gameLogic.updateResources(state, {
          startAmount: action.startAmount,
          endAmount: action.endAmount
        });

      default:
        throw new Error(`Unknown action type: ${action.type}`);
    }
  }
}