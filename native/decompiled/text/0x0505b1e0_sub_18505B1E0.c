// sub_18505B1E0
// rva 0x0505b1e0  size 221  section .text  group text
// window base 0x18505b1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18505B1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+8h] [rbp-10h]
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v14 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_8;
  }
  if ( a5 != v6
    && (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x16D6u >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 5846 )
  {
    goto LABEL_9;
  }
  if ( a5 == v6 )
  {
LABEL_8:
    v14 = a3;
    MEMORY[0x182771080]();
LABEL_9:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: a3, a5: v6 + 10829678);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18505B2C0();
  }
  v14 = a3;
  v8 = *a5 >> 3;
  v9 = v6[2 * v8 + 11] & (0x16D6u >> HIBYTE(v6[2 * v8 + 11]));
  v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5
                                                           + *(_QWORD *)((char *)&v6[2 * v8]
                                                                       + HIWORD(v6[2 * (unsigned int)v6[2 * v8 + 5]
                                                                                 + 3
                                                                                 + v9])));
  v13 = a5;
  result = v10(a1, a2: v9, a3: a5);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
