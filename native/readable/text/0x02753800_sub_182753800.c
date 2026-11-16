// sub_2753800
// rva 0x02753800  size 267  section .text  group text
// window base 0x182753800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2753800(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2753920();
  }
  else
  {
    if ( a5 == v7 )
      goto LABEL_10;
    if ( a5[2] != 3 )
      goto LABEL_10;
    v10 = (unsigned int)a5[3];
    if ( (_DWORD)v10 != 0 )
    {
      v11 = v7[2 * v10] >> 3;
      v6 = (unsigned __int64)&v7[2 * v7[2 * v11 + 5]];
      a2 = v7[2 * v11 + 11] & (0x2661u >> HIBYTE(v7[2 * v11 + 11]));
      if ( (unsigned __int16)*(_DWORD *)(v6 + 4 * a2 + 12) != 9825 )
        goto LABEL_10;
    }
    if ( (_DWORD)(v12 = (unsigned int)a5[4]) != 0 && (_DWORD)(v6 = v7[2 * v12] >> 3) != 4869218
      || (_DWORD)(v6 = (unsigned int)a5[5]) != 0
      && ((v13 = v7[2 * v6] >> 3, SHIWORD(v7[2 * v13 + 15]) < 3) || v7[2 * v7[2 * v13 + 4] + 5] != 72321) )
    {
LABEL_10:
      a6 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _DWORD *, _DWORD *))sub_2757000(
                                                                                               a1,
                                                                                               a2,
                                                                                               a3: a5);
    }
    v14 = a6(a1, a2, a3: &v7[2 * v10], a4: &v7[2 * v12], a5: &v7[2 * v12], a6: &v7[2 * v6]);
    if ( *(int *)(v8 + 16) <= 0 )
      v14 = sub_277F280(a1: v16, a2: v17, a3: v15);
    if ( v14 != 0 )
      JUMPOUT(0x304E9C8D9LL);
    return (__int64)(v7 + 8781820);
  }
}
