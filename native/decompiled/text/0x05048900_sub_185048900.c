// sub_185048900
// rva 0x05048900  size 2513  section .text  group text
// window base 0x185048900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_185048900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  _DWORD *v24; // r8
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+18h] [rbp-40h]
  __int64 v28; // [rsp+20h] [rbp-38h]
  __int64 v29; // [rsp+28h] [rbp-30h]
  unsigned int v30; // [rsp+48h] [rbp-10h]
  int v31; // [rsp+4Ch] [rbp-Ch]

  v29 = a3;
  if ( (unsigned __int64)&v25 <= v8[1] )
    goto LABEL_4;
  v31 = *(_DWORD *)(a3 + 136);
  v9 = v31 & 0xFFFFFEFF;
  v30 = v9;
  if ( (unsigned int)v9 <= 0x63 )
    __asm { jmp     rbp; switch jump }
  while ( 1 )
  {
    v10 = v8[5];
    if ( (unsigned __int64)(v10 + 24) > v8[4] )
      JUMPOUT(0x185048E91LL);
    v8[5] = v10 + 24;
    *(_DWORD *)v10 = 34085680;
    *(_DWORD *)(v10 + 4) = 0;
    *(_QWORD *)(v10 + 8) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    v27 = v10;
    v11 = v8[5];
    if ( (unsigned __int64)(v11 + 32) > v8[4] )
      JUMPOUT(0x185048EA5LL);
    v8[5] = v11 + 32;
    *(_QWORD *)v11 = 34082368;
    *(_DWORD *)(v11 + 8) = 16;
    *(_DWORD *)(v11 + 12) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v10 + 4) = (unsigned __int64)(v11 - v7) >> 3;
    if ( (*(_DWORD *)v10 & 2) != 0 )
      JUMPOUT(0x185048E28LL);
    v28 = v7 + 373281248;
    MEMORY[0x184F36F80](a1, a2, a3: v10, a4: v7 + 373281248, a5: v7 + 373281248);
    MEMORY[0x184F36640](a1: v13, a2: v14, a3: v27, a4: v12, a5: v30);
    v17 = v27;
    if ( *(_DWORD *)(v27 + 8) != 0 )
    {
      v18 = v8[5];
      if ( (unsigned __int64)(v18 + 24) > v8[4] )
        JUMPOUT(0x185048ED7LL);
      v8[5] = v18 + 24;
      *(_DWORD *)v18 = 34082680;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      v26 = (_DWORD *)v18;
      MEMORY[0x184FE9280](a1: v15, a2: v16, a3: v18, a4: v18, a5: v17, a6: v7);
      v28 = (__int64)v26;
    }
    else
    {
      v19 = v28;
    }
    v20 = v8[5];
    if ( (unsigned __int64)(v20 + 40) > v8[4] )
      JUMPOUT(0x185048EC5LL);
    v8[5] = v20 + 40;
    *(_DWORD *)v20 = 34909680;
    *(_DWORD *)(v20 + 4) = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 24) = 0;
    *(_QWORD *)(v20 + 32) = 0;
    *(_DWORD *)(v20 + 20) = 46923644;
    *(_DWORD *)(v20 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v7) >> 3;
    v26 = (_DWORD *)v20;
    sub_18503B9A0(a1: v15, a2: v16, a3: (unsigned int *)v20, a4: v19, a5: 0);
    v24 = v26;
    v26[2] = (unsigned __int64)(v28 - v7) >> 3;
    if ( (*v24 & 2) != 0 )
      JUMPOUT(0x185048E5ALL);
    MEMORY[0x182769900](a1: v22, a2: v23, a3: v24, a4: v21, a5: &a7);
LABEL_4:
    MEMORY[0x181EB84E0]();
  }
}
