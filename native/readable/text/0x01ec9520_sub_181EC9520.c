// sub_1EC9520
// rva 0x01ec9520  size 177  section .text  group text
// window base 0x181ec9520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC9520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  char v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]
  __int64 v15; // [rsp+10h] [rbp-18h]
  _DWORD *v16; // [rsp+18h] [rbp-10h]
  unsigned int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    v16 = a5;
    v15 = a3;
    sub_1EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v13);
LABEL_7:
    sub_276FC00(a1, a2, a3: a5, a4: a3, a5: v6 + 10117340);
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
    return sub_1EC95E0();
  }
  if ( a5 != v6
    && (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x1D2Au >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 7466 )
  {
    goto LABEL_7;
  }
  v16 = a5;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = (__int64)&v6[2 * *(unsigned int *)(a3 + 4)];
  v15 = a3;
  v17 = v8;
  v14 = v9;
  result = sub_1EC9160(a1, a2, a3: v9, a4: v8, a5: (unsigned int)v8, a6);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v11, a2: v12, a3: v14, a4: v17);
  return result;
}
