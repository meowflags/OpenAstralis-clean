// sub_184F2A2A0
// rva 0x04f2a2a0  size 1689  section .text  group text
// window base 0x184f2a2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2A2A0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  __int64 v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]
  unsigned int *v40; // [rsp+20h] [rbp-38h]
  unsigned int v41; // [rsp+2Ch] [rbp-2Ch]
  __int64 v42; // [rsp+38h] [rbp-20h]
  __int64 v43; // [rsp+40h] [rbp-18h]
  __int64 v44; // [rsp+48h] [rbp-10h]
  __int64 v45; // [rsp+50h] [rbp-8h]

  v40 = a3;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_35:
    LODWORD(v7) = MEMORY[0x182771080](a1: v10, a2: v11, a3, a4: v34, a5: v8, a6: v9);
LABEL_36:
    MEMORY[0x182771220](a1: v10, a2: v11, a3: (unsigned int)v7, a4: a3, a5: (unsigned int)v3, a6: v9);
    __halt();
  }
  v7 = a3[10];
  v8 = v5 + 8LL * a3[5];
  v9 = 34082680;
  v10 = 34082368;
  v44 = 34082368;
  v11 = 34085680;
  v3 = (unsigned int)(v7 + 4);
  if ( (unsigned int)v3 <= 0xE )
    __asm { jmp     rcx; switch jump }
  if ( (int)v7 < 256 )
  {
    v34 = a3[4];
    if ( (_DWORD)v34 == 0 )
      goto LABEL_35;
    LODWORD(v3) = *(_DWORD *)(v5 + 8 * v34 + 8);
    if ( (unsigned int)v3 <= (unsigned int)v7 )
      goto LABEL_36;
    if ( (*(_BYTE *)(v5 + 8 * v34 + v7 + 12) & 8) != 0 )
    {
      v39 = v8;
      v43 = 34085680;
      v42 = 34082680;
      goto LABEL_10;
    }
  }
  v12 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v6 + 32) )
  {
    v43 = 34085680;
    v42 = 34082680;
    v41 = v7;
    v12 = MEMORY[0x181EAA920](a1: 34082368, a2: 34085680, a3: 34082680);
    v11 = v43;
    v10 = v44;
    v9 = v42;
    LODWORD(v7) = v41;
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v12 + 24;
    *(_DWORD *)v12 = 34082680;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
  }
  v13 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v6 + 32) )
  {
    v37 = v12;
    v43 = v11;
    v42 = v9;
    v41 = v7;
    v13 = MEMORY[0x181EAA840](a1: v10, a2: v11, a3: 34089376, a4: v13, a5: 3);
    v12 = v37;
    LOWORD(v7) = v41;
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v13 + 24;
    *(_QWORD *)v13 = 34089376;
    *(_DWORD *)(v13 + 8) = 3;
    *(_DWORD *)(v13 + 12) = 0;
    *(_QWORD *)(v13 + 16) = 0;
    v43 = v11;
    v42 = v9;
  }
  *(_WORD *)(v13 + 16) = 39;
  *(_WORD *)(v13 + 14) = v7;
  *(_WORD *)(v13 + 12) = 39;
  v37 = v12;
  v38 = v13;
  MEMORY[0x184FE8D60](a1: 3, a2: v5, a3: v12, a4: v13, a5: v13, a6: 0);
  v45 = v4;
  v39 = v37;
LABEL_10:
  v14 = *(_QWORD *)(v6 + 40);
  if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v6 + 32) )
  {
    v14 = MEMORY[0x181EAA920](a1: v10, a2: v11, a3: v43);
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v14 + 24;
    *(_DWORD *)v14 = 34085680;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
  }
  v37 = v14;
  v15 = *(_QWORD *)(v6 + 40);
  v16 = v15 + 32;
  if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v6 + 32) )
  {
    v15 = MEMORY[0x181EAA840](a1: v10, a2: v11, a3: v44, a4: v16, a5: 16);
    v14 = v37;
  }
  else
  {
    v17 = v44;
    *(_QWORD *)(v6 + 40) = v16;
    *(_QWORD *)v15 = v17;
    *(_DWORD *)(v15 + 8) = 16;
    *(_DWORD *)(v15 + 12) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
  }
  *(_DWORD *)(v14 + 4) = (unsigned __int64)(v15 - v5) >> 3;
  if ( (*(_DWORD *)v14 & 2) != 0 )
  {
    v35 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v35) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v35) >> 9) + 0x38) = 0;
  }
  sub_184F36F80(a1: v17, a2: v11, a3: v14, a4: v5 + 366613504, a5: v5 + 366613504);
  sub_184F36F80(a1: v19, a2: v20, a3: v37, a4: v18, a5: v39);
  sub_184F36F80(a1: v22, a2: v23, a3: v37, a4: v21, a5: v5 + 365345720);
  v41 = v40[9];
  sub_184F36640(a1: v24, a2: v25, a3: v37, a4: v41, a5: v41);
  v29 = v37;
  if ( *(_DWORD *)(v37 + 8) != 0 )
  {
    v30 = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v6 + 32) )
    {
      v30 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: v42);
      v31 = v37;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v30 + 24;
      *(_DWORD *)v30 = 34082680;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
      v31 = v29;
    }
    v38 = v30;
    MEMORY[0x184FE9280](a1: v27, a2: v28, a3: v30, a4: v26, a5: v31, a6: v5);
    v32 = v38;
  }
  else
  {
    v32 = v5 + 373281248;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v27, a2: v28, a3: v39, a4: v26, a5: v32);
  return v32;
}
