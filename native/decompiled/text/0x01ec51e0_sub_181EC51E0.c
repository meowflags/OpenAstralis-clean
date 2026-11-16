// sub_181EC51E0
// rva 0x01ec51e0  size 240  section .text  group text
// window base 0x181ec51e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC51E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  char v16; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+10h] [rbp-18h]
  unsigned int v18; // [rsp+1Ch] [rbp-Ch]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v16);
    goto LABEL_16;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_16:
    v19 = a3;
    MEMORY[0x182771080]();
LABEL_17:
    MEMORY[0x182771080](a1, a2, a3: v12);
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
    return sub_181EC52E0();
  }
  v9 = *(unsigned int *)(v6 + 8 * v8 + 72);
  if ( (_DWORD)v9 != 0 )
  {
    v10 = v6 + 8 * v9;
    v19 = a3;
  }
  else
  {
    v18 = *(_DWORD *)(a3 + 4);
    v19 = a3;
    v17 = v6 + 8 * v8;
    v14 = MEMORY[0x1828A30C0](a1, a2, a3: v17);
    *(_DWORD *)(v6 + 8LL * v18 + 72) = (unsigned __int64)(v14 - v6) >> 3;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v15 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v15) >> 9) + 0x38) = 0;
      v10 = v14;
    }
    else
    {
      v10 = v14;
    }
  }
  v11 = *(unsigned int *)(v10 + 8);
  v12 = v6 + 8 * v11;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_17;
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1, a2, a3: v12);
  return v12;
}
