// sub_184F33780
// rva 0x04f33780  size 624  section .text  group text
// window base 0x184f33780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F33780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+10h] [rbp-28h]
  __int64 v31; // [rsp+18h] [rbp-20h]
  __int64 v32; // [rsp+20h] [rbp-18h]
  __int64 v33; // [rsp+28h] [rbp-10h]
  unsigned int v34; // [rsp+30h] [rbp-8h]
  int v35; // [rsp+34h] [rbp-4h]

  v33 = a3;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v6 + 8) )
  {
    v32 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v5 )
  {
    v7 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v7 == 0 )
    {
LABEL_30:
      MEMORY[0x182771080]();
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
      return sub_184F33A00(a1: v27, a2: v28, a3: v26);
    }
    if ( *(_DWORD *)(v5 + 8 * v7 + 8) == 0 )
    {
      v32 = a5;
      goto LABEL_6;
    }
    v32 = a5;
    v8 = MEMORY[0x184FEBC20](a1, a2, a3: a5, a4, a5: 0);
    v11 = *(unsigned __int16 *)(v33 + 4);
    if ( (_DWORD)v11 == v8 )
    {
LABEL_6:
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v32;
    }
    v35 = v8;
    v13 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v6 + 32) )
    {
      v34 = v11;
      v13 = MEMORY[0x181EAA920](a1: v9, a2: v10, a3: 34085680);
      v11 = v34;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v13 + 24;
      *(_DWORD *)v13 = 34085680;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
    }
    v31 = v13;
    v14 = *(_QWORD *)(v6 + 40);
    v15 = 34082368;
    if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v6 + 32) )
    {
      v34 = v11;
      v14 = MEMORY[0x181EAA840](a1: v9, a2: 34082368, a3: 34082368, a4: v11, a5: 16);
      v13 = v31;
      v11 = v34;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v14 + 32;
      *(_QWORD *)v14 = 34082368;
      *(_DWORD *)(v14 + 8) = 16;
      *(_DWORD *)(v14 + 12) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
    }
    *(_DWORD *)(v13 + 4) = (unsigned __int64)(v14 - v5) >> 3;
    if ( (*(_DWORD *)v13 & 2) != 0 )
    {
      v25 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v25) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v25) >> 9) + 0x38) = 0;
    }
    v34 = v11;
    sub_184F35F80(a1: v9, a2: v15, a3: v13, a4: v11, a5: (unsigned int)v11);
    v19 = sub_184F36F80(a1: v17, a2: v18, a3: v31, a4: v16, a5: v32);
    v22 = v31;
    if ( *(_DWORD *)(v31 + 8) != 0 )
    {
      v23 = *(_QWORD *)(v6 + 40);
      if ( (unsigned __int64)(v23 + 24) > *(_QWORD *)(v6 + 32) )
      {
        v30 = v19;
        v23 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: 34082680);
        v22 = v31;
      }
      else
      {
        *(_QWORD *)(v6 + 40) = v23 + 24;
        *(_DWORD *)v23 = 34082680;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
      }
      v30 = v23;
      MEMORY[0x184FE9280](a1: v20, a2: v21, a3: v23, a4: v22, a5: v22, a6: v5);
      v24 = v30;
    }
    else
    {
      v24 = v5 + 373281248;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v20, a2: v21, a3: v24);
    return v24;
  }
  MEMORY[0x182771080]();
  goto LABEL_30;
}
