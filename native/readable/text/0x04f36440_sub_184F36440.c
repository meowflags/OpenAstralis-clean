// sub_4F36440
// rva 0x04f36440  size 238  section .text  group text
// window base 0x184f36440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F36440(__int64 a1, __int64 a2, __int64 a3, double a4)
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
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  _DWORD *v20; // [rsp+20h] [rbp-18h]
  unsigned int v21; // [rsp+28h] [rbp-10h]
  unsigned int v22; // [rsp+2Ch] [rbp-Ch]
  double v23; // [rsp+30h] [rbp-8h]

  v20 = (_DWORD *)a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v5 + 8) )
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
    return sub_4F36540();
  }
  else
  {
    v23 = a4;
    v6 = *(unsigned int *)(a3 + 4);
    v22 = *(char *)(a3 + 12);
    v21 = *(_DWORD *)(a3 + 8);
    v7 = sub_4F39060(a1, a2, a3: v4 + 8 * v6, a4: v21, a5: v22, a6: v21 + 24);
    if ( v22 != 0 )
      v10 = v4 + 377133368;
    else
      v10 = v4 + 377133384;
    v19 = v10;
    v18 = v7;
    v11 = sub_61043E0(a1: v8, a2: v9, a3: v10, a4: v22, a5: v7, a6: v21, a7: v23);
    v14 = (unsigned __int64)v20;
    v20[2] = v11;
    *(_DWORD *)(v14 + 4) = (unsigned __int64)(v18 - v4) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v16 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1: v12, a2: v13, a3: v14, a4: v22);
    return v14;
  }
}
