// sub_184F36540
// rva 0x04f36540  size 238  section .text  group text
// window base 0x184f36540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F36540(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  _DWORD *v25; // [rsp+20h] [rbp-18h]
  unsigned int v26; // [rsp+2Ch] [rbp-Ch]
  unsigned int v27; // [rsp+30h] [rbp-8h]
  float v28; // [rsp+34h] [rbp-4h]

  v25 = (_DWORD *)a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v5 + 8) )
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
    return sub_184F36640(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21);
  }
  else
  {
    v28 = a4;
    v6 = *(unsigned int *)(a3 + 4);
    v27 = *(char *)(a3 + 12);
    v26 = *(_DWORD *)(a3 + 8);
    v7 = sub_184F39060(a1, a2, a3: v4 + 8 * v6, a4: v26, a5: v27, a6: v26 + 15);
    if ( v27 != 0 )
      v10 = v4 + 377133400;
    else
      v10 = v4 + 377133416;
    v24 = v10;
    v23 = v7;
    v11 = MEMORY[0x18610C5A0](a1: v8, a2: v9, a3: v10, a4: v27, a5: v7, a6: v26, a7: v28);
    v14 = (unsigned __int64)v25;
    v25[2] = v11;
    *(_DWORD *)(v14 + 4) = (unsigned __int64)(v23 - v4) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v16 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v12, a2: v13, a3: v14, a4: v27);
    return v14;
  }
}
