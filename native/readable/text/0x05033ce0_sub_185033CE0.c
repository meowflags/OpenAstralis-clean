// sub_5033CE0
// rva 0x05033ce0  size 629  section .text  group text
// window base 0x185033ce0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_5033CE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  _DWORD *v12; // rdx
  unsigned __int64 i; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  int v29; // ebp
  __int64 v30; // rsi
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v37; // [rsp+8h] [rbp-20h]
  __int64 v38; // [rsp+10h] [rbp-18h]
  __int64 v39; // [rsp+18h] [rbp-10h]
  __int64 v40; // [rsp+20h] [rbp-8h]

  v40 = a3;
  v39 = a5;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v9 = sub_5033760(a1, a2, a3, a4, a5, a6, a7: v36);
    v12 = *(_DWORD **)(v8 + 40);
    if ( (unsigned __int64)(v12 + 28) > *(_QWORD *)(v8 + 32) )
    {
      v38 = v9;
      v14 = sub_1EAA920(a1: v10, a2: v11, a3: 34099232);
      v9 = v38;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v12 + 28;
      *v12 = 34099232;
      v12[1] = 0;
      for ( i = 2; i < 28; i += 2LL )
        *(_QWORD *)&v12[i] = 0;
      v14 = (unsigned __int64)v12;
    }
    v15 = *(unsigned int *)(v40 + 12);
    v16 = *(_QWORD *)(v40 + 32);
    v17 = v7 + 8LL * *(unsigned int *)(v40 + 24);
    v38 = v9;
    v37 = (_DWORD *)v14;
    sub_502E460(a1: v15, a2: v39, a3: v14, a4: v16, a5: v17, a6: v9);
    v20 = v40;
    if ( *(_BYTE *)(v40 + 41) != 0 )
    {
      v21 = (unsigned __int64)v37;
      v22 = *(_BYTE *)(v40 + 40);
      v23 = (unsigned int)v37[3];
      if ( (_DWORD)v23 == 0 )
        goto LABEL_30;
      *(_BYTE *)(v7 + 8 * v23 + 32) = v22;
      __faststorefence();
    }
    else
    {
      v21 = (unsigned __int64)v37;
    }
    v24 = *(_DWORD *)(v20 + 28);
    if ( v24 != 0 )
    {
      v25 = *(unsigned int *)(v21 + 12);
      if ( (_DWORD)v25 == 0 )
        goto LABEL_31;
      v26 = *(unsigned int *)(v7 + 8 * v25 + 4);
      if ( (_DWORD)v26 != 0 )
      {
        v29 = *(_DWORD *)(v7 + 8 * v26 + 20);
        v30 = *(unsigned int *)(v21 + 12);
        if ( v24 < v29 )
          JUMPOUT(0x30A04EE2FLL);
        if ( (_DWORD)v30 == 0 )
        {
          while ( 1 )
          {
            sub_2771080(a1: v18, a2: v30, a3: v38, a4: v7 + 8 * v26);
LABEL_33:
            v32 = sub_1EAA920(a1, a2, a3: 34101256);
LABEL_29:
            *(_DWORD *)(v32 + 20) = 46923644;
            *(_DWORD *)(v32 + 16) = *(_DWORD *)(v7 + 374343896);
            *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v7) >> 3;
            v38 = v32;
            sub_503B9A0(a1, a2, a3: v32, a4, a5: 0);
            v22 = sub_2769900(a1: v34, a2: v35, a3: v38, a4: v33, a5: &a7);
LABEL_30:
            sub_2771080(a1: v18, a2: v19, a3: v22);
LABEL_31:
            sub_2771080();
          }
        }
        *(_DWORD *)(v7 + 8 * v30 + 24) = v29;
        __faststorefence();
      }
    }
    v27 = *(_DWORD *)(v20 + 8);
    if ( v27 != 0 )
    {
      *(_DWORD *)(v21 + 44) = v27;
      __faststorefence();
      if ( (*(_DWORD *)v21 & 2) != 0 )
      {
        v31 = (v21 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v31) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - v31) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v21;
  }
  v32 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v32 + 48) > *(_QWORD *)(v8 + 32) )
    goto LABEL_33;
  *(_QWORD *)(v8 + 40) = v32 + 48;
  *(_DWORD *)v32 = 34101256;
  *(_DWORD *)(v32 + 4) = 0;
  *(_QWORD *)(v32 + 8) = 0;
  *(_QWORD *)(v32 + 16) = 0;
  *(_QWORD *)(v32 + 24) = 0;
  *(_QWORD *)(v32 + 32) = 0;
  *(_QWORD *)(v32 + 40) = 0;
  goto LABEL_29;
}
