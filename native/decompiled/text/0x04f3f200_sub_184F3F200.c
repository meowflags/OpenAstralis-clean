// sub_184F3F200
// rva 0x04f3f200  size 848  section .text  group text
// window base 0x184f3f200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3F200(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rbp
  __int64 v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]
  __int64 v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  _DWORD *v29; // [rsp+20h] [rbp-18h]
  int v30; // [rsp+2Ch] [rbp-Ch]
  __int64 v31; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F3F560();
  }
  else
  {
    v29 = a3;
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v30 = a5;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
      a5 = v30;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 24;
      *(_DWORD *)v8 = 34085680;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    v28 = v8;
    v9 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v9 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v30 = a5;
      v9 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v9, a5: 16);
      v8 = v28;
      a5 = v30;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9 + 32;
      *(_QWORD *)v9 = 34082368;
      *(_DWORD *)(v9 + 8) = 16;
      *(_DWORD *)(v9 + 12) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
    }
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(v9 - v6) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v20 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v20) >> 9) + 0x38) = 0;
    }
    v30 = a5;
    sub_184F36F80(a1, a2, a3: v8, a4: v6 + 372027584, a5: v6 + 372027584);
    sub_184F36640(a1: v11, a2: v12, a3: v28, a4: v10, a5: v30);
    v15 = v28;
    if ( *(_DWORD *)(v28 + 8) != 0 )
    {
      v16 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v7 + 32) )
      {
        v16 = MEMORY[0x181EAA920](a1: v13, a2: v14, a3: 34082680);
        v15 = v28;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v16 + 24;
        *(_DWORD *)v16 = 34082680;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
      }
      v26 = v16;
      MEMORY[0x184FE9280](a1: v13, a2: v14, a3: v16, a4: v16, a5: v15, a6: v6);
      v31 = v5;
      v27 = v26;
    }
    else
    {
      v27 = v6 + 373281248;
    }
    v17 = (unsigned __int64)v29;
    v29[3] = ((unsigned __int64)v29 - v6) >> 3;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v21 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v21) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v21) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v17 + 16) = *(_DWORD *)(v6 + 374343896);
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v23 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v23) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v23) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v17 + 20) = 46923644;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v24 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v24) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v24) >> 9) + 0x38) = 0;
    }
    ((void (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*(_DWORD *)v17 >> 3) + 112)))();
    result = v27;
    v19 = (unsigned __int64)v29;
    v29[2] = (unsigned __int64)(v27 - v6) >> 3;
    if ( (*(_DWORD *)v19 & 2) != 0 )
    {
      v22 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
