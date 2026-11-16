// sub_2751240
// rva 0x02751240  size 262  section .text  group text
// window base 0x182751240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2751240(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  int v17; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_16;
  if ( a5 == v6
    || *(_DWORD *)(a5 + 8) != 1
    || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0
    && (v9 = *(_DWORD *)(v6 + 8 * v8) >> 3,
        a2 = *(_DWORD *)(v6 + 8 * v9 + 44) & (0x18CAu >> HIBYTE(*(_DWORD *)(v6 + 8 * v9 + 44))),
        (_DWORD)(a4 = (unsigned __int16)*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v9 + 20) + 4 * a2 + 12)) != 6346) )
  {
    sub_2756FC0();
LABEL_16:
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2751360();
  }
  v10 = a6(a1, a2, a3, a4, a5: v6 + 8 * v8);
  v13 = (unsigned int)(v10 + 128);
  if ( (unsigned int)v13 >= 0x100 )
  {
    v14 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v14 + 16) > *(_QWORD *)(v7 + 32) )
    {
      v17 = v10;
      v14 = sub_1EAA920(a1: v11, a2: v12, a3: 34086464);
      v10 = v17;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v14 + 16;
      *(_DWORD *)v14 = 34086464;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
    }
    *(_DWORD *)(v14 + 4) = v10;
  }
  else
  {
    v14 = v6 + 8LL * *(unsigned int *)(v6 + 4 * v13 + 376353204);
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v11, a2: v12, a3: v14);
  return v14;
}
