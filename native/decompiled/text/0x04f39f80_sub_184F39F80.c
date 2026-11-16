// sub_184F39F80
// rva 0x04f39f80  size 254  section .text  group text
// window base 0x184f39f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F39F80(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, _DWORD *); // rax
  unsigned int v12; // eax
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v16; // [rsp+10h] [rbp-18h]
  _DWORD *v17; // [rsp+18h] [rbp-10h]
  unsigned int v18; // [rsp+24h] [rbp-4h]

  v17 = a3;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v8 + 8) )
  {
    v18 = a5;
    MEMORY[0x181EB84E0]();
LABEL_8:
    MEMORY[0x182770780]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F3A080();
  }
  if ( a6 == v7 )
    a6 = v7 + 88325320;
  if ( (unsigned __int16)v7[2 * v7[2 * (*a6 >> 3) + 5]
                          + 3
                          + (v7[2 * (*a6 >> 3) + 11] & (0x568u >> HIBYTE(v7[2 * (*a6 >> 3) + 11])))] != 1384 )
    goto LABEL_8;
  v18 = a5;
  v9 = *a6 >> 3;
  v10 = v7[2 * v9 + 11] & (0x568u >> HIBYTE(v7[2 * v9 + 11]));
  v11 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                           + *(_QWORD *)((char *)&v7[2 * v9 + 10]
                                                                       + HIWORD(v7[2 * (unsigned int)v7[2 * v9 + 5]
                                                                                 + 3
                                                                                 + v10])));
  v16 = a6;
  v12 = v11(a1, a2: v10, a3: a6);
  v13 = (__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, _QWORD, _QWORD, _DWORD *))(v6
                                                                                   + *(_QWORD *)&v7[2 * (*v17 >> 3) + 118]);
  result = v13(a1: 0, a2: v12, a3: v17, a4: v13, a5: v18, a6: v16);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
