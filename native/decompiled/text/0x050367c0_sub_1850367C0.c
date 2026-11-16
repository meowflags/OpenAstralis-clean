// sub_1850367C0
// rva 0x050367c0  size 582  section .text  group text
// window base 0x1850367c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850367C0(__int64 a1, __int64 a2, _DWORD *a3)
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
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned __int64 v28; // rbx
  __int64 v29; // [rsp+0h] [rbp-28h] BYREF
  __int64 v30; // [rsp+8h] [rbp-20h]
  __int64 v31; // [rsp+10h] [rbp-18h]
  _DWORD *v32; // [rsp+18h] [rbp-10h]
  unsigned int v33; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v32 = a3;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (unsigned __int64)(v5 + 24) > *(_QWORD *)(v4 + 32) )
  {
    v5 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
    a3 = v32;
  }
  else
  {
    *(_QWORD *)(v4 + 40) = v5 + 24;
    *(_DWORD *)v5 = 34085680;
    *(_DWORD *)(v5 + 4) = 0;
    *(_QWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0;
  }
  v31 = v5;
  v6 = *(_QWORD *)(v4 + 40);
  v7 = v6 + 32;
  if ( (unsigned __int64)(v6 + 32) > *(_QWORD *)(v4 + 32) )
  {
    v6 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v7, a5: 16);
    v5 = v31;
    a3 = v32;
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
    v28 = (v5 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v28) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v28) >> 9) + 0x38) = 0;
  }
  v30 = v3 + 8LL * *(unsigned int *)(v3 + 8LL * (*a3 >> 3) + 12);
  MEMORY[0x184F36F80](a1, a2, a3: v5, a4: v7, a5: v30);
  MEMORY[0x184F36F80](a1: v9, a2: v10, a3: v31, a4: v8, a5: v3 + 365370424);
  v30 = v3 + 8LL * (unsigned int)v32[2];
  MEMORY[0x184F36F80](a1: v11, a2: v12, a3: v31);
  MEMORY[0x184F36F80](a1: v14, a2: v15, a3: v31, a4: v13, a5: v3 + 372607448);
  v33 = v32[5];
  MEMORY[0x184F36640](a1: v16, a2: v17, a3: v31, a4: v33, a5: v33);
  v21 = MEMORY[0x184F36F80](a1: v19, a2: v20, a3: v31, a4: v18, a5: v3 + 365347544);
  v24 = v31;
  if ( *(_DWORD *)(v31 + 8) != 0 )
  {
    v25 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v25 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v30 = v21;
      v25 = MEMORY[0x181EAA920](a1: v22, a2: v23, a3: 34082680);
      v24 = v31;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v25 + 24;
      *(_DWORD *)v25 = 34082680;
      *(_DWORD *)(v25 + 4) = 0;
      *(_QWORD *)(v25 + 8) = 0;
      *(_QWORD *)(v25 + 16) = 0;
    }
    v30 = v25;
    MEMORY[0x184FE9280](a1: v22, a2: v23, a3: v25, a4: v24, a5: v24, a6: v3);
    v26 = v30;
  }
  else
  {
    v26 = v3 + 373281248;
  }
  if ( *(int *)(v4 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v22, a2: v23, a3: v26);
  return v26;
}
