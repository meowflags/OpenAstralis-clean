// sub_182768F00
// rva 0x02768f00  size 828  section .text  group text
// window base 0x182768f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182768F00(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r9d
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdx
  _DWORD *v29; // rdx
  unsigned __int64 v31; // rbx
  char v32; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v33; // [rsp+10h] [rbp-28h]
  __int64 v34; // [rsp+18h] [rbp-20h]
  __int64 v35; // [rsp+20h] [rbp-18h]
  int v36; // [rsp+2Ch] [rbp-Ch]
  int v37; // [rsp+30h] [rbp-8h]
  int v38; // [rsp+34h] [rbp-4h]

  v35 = a3;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v4 + 8) )
  {
    LODWORD(v11) = MEMORY[0x181EB84E0]();
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v5 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v5 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v5 + 24;
      *(_DWORD *)v5 = 34085680;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
    }
    v34 = v5;
    v6 = *(_QWORD *)(v4 + 40);
    v7 = v6 + 32;
    if ( (unsigned __int64)(v6 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v6 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v7, a5: 16);
      v5 = v34;
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
    *(_DWORD *)(v5 + 4) = (unsigned __int64)(v6 - (_QWORD)v3) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v7 = v5 & 0xFFFFFFFFFFF80000LL;
      v31 = (v5 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v31) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v31) >> 9) + 0x38) = 0;
    }
    MEMORY[0x184F36F80](a1, a2, a3: v5, a4: v7, a5: v3 + 87614604);
    if ( *(int *)(v35 + 12) < 1 )
    {
      v38 = 0;
LABEL_20:
      v24 = MEMORY[0x184F36F80](a1: v9, a2: v10, a3: v34, a4: v3 + 87549914, a5: v3 + 87549914);
      v27 = v34;
      if ( *(_DWORD *)(v34 + 8) != 0 )
      {
        v28 = *(_QWORD *)(v4 + 40);
        if ( (unsigned __int64)(v28 + 24) > *(_QWORD *)(v4 + 32) )
        {
          v33 = (_DWORD *)v24;
          v28 = MEMORY[0x181EAA920](a1: v25, a2: v26, a3: 34082680);
          v27 = v34;
        }
        else
        {
          *(_QWORD *)(v4 + 40) = v28 + 24;
          *(_DWORD *)v28 = 34082680;
          *(_DWORD *)(v28 + 4) = 0;
          *(_QWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = 0;
        }
        v33 = (_DWORD *)v28;
        MEMORY[0x184FE9280](a1: v25, a2: v26, a3: v28, a4: v27, a5: v27, a6: v3);
        v29 = v33;
      }
      else
      {
        v29 = v3 + 93320312;
      }
      if ( *(int *)(v4 + 16) <= 0 )
        sub_18277F280(a1: v25, a2: v26, a3: v29);
      return (__int64)v29;
    }
    v11 = (_DWORD *)MEMORY[0x18578A820](a1: v9, a2: v10, a3: v35, a4: v8, a5: 0);
    if ( v11 == v3 || *v11 >> 3 == 4260335 )
    {
      v33 = v11;
      MEMORY[0x184F36F80](a1: v13, a2: v14, a3: v34, a4: v12, a5: v11);
      if ( *(_DWORD *)(v35 + 12) - 1 >= 1 )
        MEMORY[0x184F36F80](a1: v9, a2: v10, a3: v34, a4: v16, a5: v3 + 93160912);
      v17 = 1;
      v18 = v35;
      while ( v17 < *(_DWORD *)(v18 + 12) )
      {
        v37 = v17;
        v19 = (_DWORD *)MEMORY[0x18578A820](a1: v9, a2: v10, a3: v18, a4: v18, a5: (unsigned int)v17);
        if ( v19 != v3 && *v19 >> 3 != 4260335 )
          goto LABEL_36;
        v33 = v19;
        MEMORY[0x184F36F80](a1: v21, a2: v22, a3: v34, a4: v20, a5: v19);
        if ( *(_DWORD *)(v35 + 12) - 1 > v37 )
        {
          v36 = v37 + 1;
          MEMORY[0x184F36F80](a1: v9, a2: v10, a3: v34, a4: (unsigned int)(v37 + 1), a5: v3 + 93160912);
          v17 = v36;
          v18 = v35;
        }
        else
        {
          v18 = v35;
          v17 = v37 + 1;
        }
      }
      v38 = v17;
      goto LABEL_20;
    }
  }
  LODWORD(v19) = sub_18276FC00(a1: v13, a2: v14, a3: (_DWORD)v11, a4: v12, a5: (int)v3 + 34082680, a6: v15, a7: v32);
LABEL_36:
  sub_18276FC00(a1: v21, a2: v22, a3: (_DWORD)v19, a4: v34, a5: (_DWORD)v3 + 34082680, a6: v23, a7: v32);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182769240();
}
