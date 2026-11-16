// sub_4F2F900
// rva 0x04f2f900  size 501  section .text  group text
// window base 0x184f2f900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2F900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v17; // rbx
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v4 + 8) )
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
    return sub_4F2FB00();
  }
  else
  {
    v21 = a3;
    v5 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v5 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v5 = sub_1EAA920(a1, a2, a3: 34085680);
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v5 + 24;
      *(_DWORD *)v5 = 34085680;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
    }
    v20 = v5;
    v6 = *(_QWORD *)(v4 + 40);
    v7 = v6 + 32;
    if ( (unsigned __int64)(v6 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v6 = sub_1EAA840(a1, a2, a3: 34082368, a4: v7, a5: 16);
      v5 = v20;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v7;
      *(_QWORD *)v6 = 34082368;
      *(_DWORD *)(v6 + 8) = 16;
      *(_DWORD *)(v6 + 12) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
    }
    *(_DWORD *)(v5 + 4) = (unsigned __int64)(v6 - v3) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v7 = v5 & 0xFFFFFFFFFFF80000LL;
      v17 = (v5 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v17) >> 9) + 0x38) = 0;
    }
    v19 = v3 + 373281248;
    sub_4F36F80(a1, a2, a3: v5, a4: v7, a5: v3 + 373281248);
    v8 = *(unsigned __int16 *)(v21 + 4);
    v22 = *(unsigned __int16 *)(v21 + 4);
    sub_4F35F80(a1: v9, a2: v10, a3: v20, a4: v8, a5: (unsigned int)v8);
    v13 = v20;
    if ( *(_DWORD *)(v20 + 8) != 0 )
    {
      v14 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v4 + 32) )
      {
        v14 = sub_1EAA920(a1: v11, a2: v12, a3: 34082680);
        v13 = v20;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v14 + 24;
        *(_DWORD *)v14 = 34082680;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
      }
      v19 = v14;
      sub_4FE9280(a1: v11, a2: v12, a3: v14, a4: v13, a5: v13, a6: v3);
      v15 = v19;
    }
    else
    {
      v15 = v19;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      sub_277F280(a1: v11, a2: v12, a3: v15);
    return v15;
  }
}
