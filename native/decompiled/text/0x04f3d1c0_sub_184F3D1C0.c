// sub_184F3D1C0
// rva 0x04f3d1c0  size 587  section .text  group text
// window base 0x184f3d1c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_184F3D1C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // [rsp+0h] [rbp-18h] BYREF
  __int64 v29; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_184F3D420(a1: v24, a2: v25, a3: v22, a4: v23, a5: v26, a6: v27, a7);
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 43285928);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 16;
      *(_DWORD *)v9 = 43285928;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      v10 = v9;
    }
    MEMORY[0x184FCAF20](a1, a2, a3: 1, a4, a5: 0, a6: v10);
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v13 = MEMORY[0x181EAA920](a1: v11, a2: v12, a3: 34248584);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 40;
      *(_DWORD *)v13 = 34248584;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 32) = 0;
    }
    v14 = *(_QWORD *)(v8 + 40);
    v15 = v14 + 272;
    if ( (unsigned __int64)(v14 + 272) > *(_QWORD *)(v8 + 32) )
    {
      v29 = v13;
      v14 = MEMORY[0x181EAA840](a1: v11, a2: v12, a3: 34084944, a4: v15, a5: 64);
      v13 = v29;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v15;
      *(_QWORD *)v14 = 34084944;
      *(_DWORD *)(v14 + 8) = 64;
      *(_DWORD *)(v14 + 12) = 0;
      for ( i = 16; i < 0x110; i += 8LL )
        *(_QWORD *)(v14 + i) = 0;
    }
    *(_DWORD *)(v13 + 12) = (unsigned __int64)(v14 - v7) >> 3;
    if ( (*(_DWORD *)v13 & 2) != 0 )
    {
      v18 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v18) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v7 + 374416892) = (unsigned __int64)(v13 - v7) >> 3;
    result = *(unsigned int *)(v7 + 374343744);
    if ( (result & 2) != 0 )
    {
      v19 = v7 + 374343744;
      if ( (result & 1) != 0 )
      {
        result = v7 + 374343744 - *(_QWORD *)(v7 + 374343736);
        if ( *(_BYTE *)(result + 190) != 0 )
          *(_BYTE *)(result + 190) = 0;
      }
      else
      {
        v20 = (v7 + 374343744) & 0xFFFFFFFFFFF80000LL;
        result = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
        v21 = (v19 - result) >> 9;
        if ( *(_BYTE *)(v20 + v21 + 56) != 0 )
          *(_BYTE *)(v20 + v21 + 56) = 0;
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
