// sub_182749F80
// rva 0x02749f80  size 230  section .text  group text
// window base 0x182749f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182749F80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  int v16; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_16;
  if ( a5 == v6
    || *(_DWORD *)(a5 + 8) != 1
    || (_DWORD)(v8 = *(unsigned int *)(a5 + 12)) != 0 && *(_DWORD *)(v6 + 8 * v8) >> 3 != 4775511 )
  {
    sub_182757000(a1, a2, a3: a5);
LABEL_16:
    MEMORY[0x181EB84E0]();
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
    return sub_18274A080();
  }
  v9 = a6(a1, a2, a3: v6 + 8 * v8);
  v12 = (unsigned int)(v9 + 128);
  if ( (unsigned int)v12 >= 0x100 )
  {
    v13 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v7 + 32) )
    {
      v16 = v9;
      v13 = MEMORY[0x181EAA920](a1: v10, a2: v11, a3: 34086464);
      v9 = v16;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v13 + 16;
      *(_DWORD *)v13 = 34086464;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
    }
    *(_DWORD *)(v13 + 4) = v9;
  }
  else
  {
    v13 = v6 + 8LL * *(unsigned int *)(v6 + 4 * v12 + 376353204);
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_18277F280(a1: v10, a2: v11, a3: v13);
  return v13;
}
