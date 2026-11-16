// sub_184F37F40
// rva 0x04f37f40  size 271  section .text  group text
// window base 0x184f37f40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F37F40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+8h] [rbp-20h]
  _DWORD *v27; // [rsp+10h] [rbp-18h]
  unsigned int v28; // [rsp+1Ch] [rbp-Ch]
  int v29; // [rsp+20h] [rbp-8h]
  unsigned int v30; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v10 + 8) )
  {
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
    return sub_184F38060();
  }
  else
  {
    v11 = *(unsigned int *)(a3 + 4);
    v30 = *(char *)(a3 + 12);
    v12 = *(unsigned int *)(a3 + 8);
    v27 = (_DWORD *)a3;
    v29 = v12 + 4;
    v28 = v12;
    v13 = sub_184F39060(a1, a2, a3: v9 + 8 * v11, a4: v12, a5: v30, a6: (unsigned int)(v12 + 4));
    if ( v30 != 0 )
    {
      v26 = v13;
      MEMORY[0x185021CA0](a1: 117, a2: 108, a3: v13, a4: 108, a5: v28, a6: 110);
      v22 = v26;
      v23 = (unsigned __int64)v27;
      v27[2] = v29;
      *(_DWORD *)(v23 + 4) = (unsigned __int64)(v22 - v9) >> 3;
      if ( (*(_DWORD *)v23 & 2) != 0 )
      {
        v21 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v21) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v21) >> 9) + 0x38) = 0;
      }
      if ( *(int *)(v10 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v20, a2: v21, a3: v23, a4: v30);
      return v23;
    }
    else
    {
      return sub_184F37FE6(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7, a8, a9);
    }
  }
}
