// sub_5059E20
// rva 0x05059e20  size 977  section .text  group text
// window base 0x185059e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_5059E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  _DWORD *i; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  unsigned int v30; // [rsp+2Ch] [rbp-Ch]

  if ( (unsigned __int64)&v26 <= v8[1] )
  {
    sub_1EB84E0();
  }
  else if ( (unsigned int)a3 <= 0xB )
  {
    __asm { jmp     rax; switch jump }
  }
  v9 = v8[5];
  if ( (unsigned __int64)(v9 + 24) > v8[4] )
  {
    v30 = a3;
    v9 = sub_1EAA920(a1, a2, a3: 34085680);
    LODWORD(a3) = v30;
  }
  else
  {
    v8[5] = v9 + 24;
    *(_DWORD *)v9 = 34085680;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
  }
  v29 = v9;
  v10 = v8[5];
  v11 = v10 + 32;
  if ( (unsigned __int64)(v10 + 32) > v8[4] )
  {
    v30 = a3;
    v10 = sub_1EAA840(a1, a2, a3: 34082368, a4: v11, a5: 16);
    v9 = v29;
    LODWORD(a3) = v30;
  }
  else
  {
    v8[5] = v11;
    *(_QWORD *)v10 = 34082368;
    *(_DWORD *)(v10 + 8) = 16;
    *(_DWORD *)(v10 + 12) = 0;
    *(_QWORD *)(v10 + 16) = 0;
    *(_QWORD *)(v10 + 24) = 0;
  }
  *(_DWORD *)(v9 + 4) = (unsigned __int64)(v10 - v7) >> 3;
  if ( (*(_DWORD *)v9 & 2) != 0 )
  {
    v11 = v9 & 0xFFFFFFFFFFF80000LL;
    v25 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v25) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v25) >> 9) + 0x38) = 0;
  }
  v30 = a3;
  sub_4F36F80(a1, a2, a3: v9, a4: v11, a5: v7 + 371875776);
  sub_4F36640(a1: v13, a2: v14, a3: v29, a4: v12, a5: v30);
  v18 = v29;
  if ( *(_DWORD *)(v29 + 8) == 0 )
    goto LABEL_18;
  v19 = v8[5];
  if ( (unsigned __int64)(v19 + 24) > v8[4] )
  {
    v19 = sub_1EAA920(a1: v16, a2: v17, a3: 34082680);
    v18 = v29;
  }
  else
  {
    v8[5] = v19 + 24;
    *(_DWORD *)v19 = 34082680;
    *(_DWORD *)(v19 + 4) = 0;
    *(_QWORD *)(v19 + 8) = 0;
    *(_QWORD *)(v19 + 16) = 0;
  }
  v27 = (_DWORD *)v19;
  sub_4FE9280(a1: v16, a2: v17, a3: v19, a4: v18, a5: v18, a6: v7);
  for ( i = v27; ; i = (_DWORD *)(v7 + 373281248) )
  {
    v20 = v8[5];
    if ( (unsigned __int64)(v20 + 40) > v8[4] )
    {
      v20 = sub_1EAA920(a1: v16, a2: v17, a3: 34081944);
    }
    else
    {
      v8[5] = v20 + 40;
      *(_DWORD *)v20 = 34081944;
      *(_DWORD *)(v20 + 4) = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = 0;
      *(_QWORD *)(v20 + 24) = 0;
      *(_QWORD *)(v20 + 32) = 0;
    }
    *(_DWORD *)(v20 + 20) = 46923644;
    *(_DWORD *)(v20 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v7) >> 3;
    v27 = (_DWORD *)v20;
    sub_503B9A0(a1: v16, a2: v17, a3: (unsigned int *)v20, a4: v15, a5: 0);
    v23 = (unsigned __int64)v27;
    v27[2] = ((unsigned __int64)i - v7) >> 3;
    if ( (*(_DWORD *)v23 & 2) != 0 )
    {
      v24 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v24) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v24) >> 9) + 0x38) = 0;
    }
    sub_2769900(a1: v21, a2: v22, a3: v23, a4: v23, a5: &a7);
LABEL_18:
    ;
  }
}
