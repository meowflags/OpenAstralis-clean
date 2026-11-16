// sub_185059040
// rva 0x05059040  size 336  section .text  group text
// window base 0x185059040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185059040(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 (*v7)(void); // rax
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v5 + 8) )
  {
    v15 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)v4[2 * v4[2 * (*a3 >> 3) + 5]
                               + 3
                               + (v4[2 * (*a3 >> 3) + 11] & (0x16C0u >> HIBYTE(v4[2 * (*a3 >> 3) + 11])))] == 5824 )
  {
    v6 = *a3 >> 3;
    v7 = (__int64 (*)(void))(v3
                           + *(_QWORD *)((char *)&v4[2 * v6]
                                       + HIWORD(v4[2 * v4[2 * v6 + 5]
                                                 + 3
                                                 + (v4[2 * v6 + 11] & (0x16C0u >> HIBYTE(v4[2 * v6 + 11])))])));
    v15 = a3;
    v8 = (_DWORD *)v7();
    if ( v8 == v4 )
    {
LABEL_9:
      MEMORY[0x182771080]();
    }
    else if ( (unsigned __int16)v4[2 * v4[2 * (*v8 >> 3) + 5]
                                 + 3
                                 + (v4[2 * (*v8 >> 3) + 11] & (0x2331u >> HIBYTE(v4[2 * (*v8 >> 3) + 11])))] == 9009 )
    {
      v11 = *v8 >> 3;
      v12 = v4[2 * v11 + 11] & (0x2331u >> HIBYTE(v4[2 * v11 + 11]));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3
                                                                   + *(_QWORD *)((char *)&v4[2 * v11 + 32]
                                                                               + HIWORD(v4[2
                                                                                         * (unsigned int)v4[2 * v11 + 5]
                                                                                         + 3
                                                                                         + v12]))))(
                 a1: v9,
                 a2: v12,
                 a3: v8);
      if ( *(int *)(v5 + 16) <= 0 )
        return MEMORY[0x18277F280]();
      return result;
    }
    MEMORY[0x182770780](a1: v9, a2: v10, a3: v15);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1850591A0();
  }
  v15 = a3;
  MEMORY[0x182770780]();
  goto LABEL_9;
}
