// Game action types
export const ACTION_TYPES = {
  MOVE: 'MOVE',
  ATTACK: 'ATTACK',
  CAPTURE: 'CAPTURE',
  CREATE_UNIT: 'CREATE_UNIT',
  SPEND_RESOURCES: 'SPEND_RESOURCES'
};

// Action structure definitions
export const ActionStructure = {
  MOVE: {
    fromPosition: 'byte',
    toPosition: 'byte',
    unitId: 'byte'
  },
  ATTACK: {
    attackerPosition: 'byte',
    targetPosition: 'byte',
    unitId: 'byte'
  },
  CAPTURE: {
    unitPosition: 'byte',
    targetPosition: 'byte',
    unitId: 'byte'
  },
  CREATE_UNIT: {
    factoryPosition: 'byte',
    unitType: 'byte',
    cost: 'number'
  },
  SPEND_RESOURCES: {
    startAmount: 'number',
    endAmount: 'number'
  }
};