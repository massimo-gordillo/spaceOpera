import jwt from 'jsonwebtoken';
import { supabase } from '../config/supabase.js';

export class AuthService {
  constructor() {
    this.JWT_SECRET = process.env.JWT_SECRET || 'dev-secret-key';
  }

  async validateUser(userId) {
    try {
      const { data: user } = await supabase
        .from('auth.users')
        .select('id')
        .eq('id', userId)
        .single();
      
      return !!user;
    } catch (error) {
      return false;
    }
  }
}