// sub_1EC3500
// rva 0x01ec3500  size 637  section .text  group text
// window base 0x181ec3500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC3500(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 i; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // [rsp+0h] [rbp-48h] BYREF
  __int64 v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+10h] [rbp-38h]
  unsigned int v36; // [rsp+1Ch] [rbp-2Ch]
  __int64 v37; // [rsp+20h] [rbp-28h]
  __int64 v38; // [rsp+28h] [rbp-20h]
  __int64 v39; // [rsp+30h] [rbp-18h]
  int v40; // [rsp+3Ch] [rbp-Ch]
  int v41; // [rsp+40h] [rbp-8h]
  unsigned int v42; // [rsp+44h] [rbp-4h]

  v39 = a5;
  v38 = a1;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v7 + 8) )
  {
    v37 = a6;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v33);
  }
  else if ( a1 != v6 )
  {
    v8 = *(unsigned int *)(a1 + 28);
    if ( (_DWORD)v8 != 0 && *(_DWORD *)(v6 + 8 * v8 + 56) != 47076830 )
    {
      if ( *(int *)(v7 + 16) <= 0 )
      {
        v37 = a6;
        sub_277F280();
      }
      return 0;
    }
    v36 = *(_DWORD *)(a1 + 28);
    if ( (_DWORD)v8 == 0 )
      goto LABEL_27;
    v37 = a6;
    sub_1EC3780(
      a1,
      a2,
      a3: a1,
      a4: v6 + 8LL * *(unsigned int *)(v6 + 8 * v8 + 8),
      a5: v6 + 8LL * *(unsigned int *)(v6 + 8 * v8 + 8),
      a6: a5);
    v12 = sub_4F66F40(a1: v10, a2: v11, a3: v38, a4: v9, a5: 1);
    if ( v12 == v6 )
      goto LABEL_28;
    v35 = v12;
    v15 = *(unsigned int *)(v12 + 8);
    v42 = v15;
    if ( (_DWORD)v15 != 0 )
    {
      v34 = v6 + 8LL * *(unsigned int *)(v12 + 12);
      sub_1EC3780(a1: v13, a2: v14, a3: v38, a4: v15, a5: v34, a6: v39);
      for ( i = 1; ; i = (unsigned int)(v40 + 1) )
      {
        v17 = v42;
        v13 = v38;
        if ( (int)v42 <= (int)i )
          break;
        if ( v42 <= (unsigned int)i )
          goto LABEL_29;
        v34 = v6 + 8LL * *(unsigned int *)(v35 + 4 * i + 12);
        v40 = i;
        sub_1EC3780(a1: v38, a2: v39, a3: v38, a4: v42, a5: v34, a6: v39);
      }
      v41 = i;
    }
    else
    {
      v41 = 0;
    }
    v34 = v6 + 376659200;
    sub_5A9A080(a1: v13, a2: v14, a3: v6 + 376659200);
    if ( *(_DWORD *)(v6 + 8LL * v36 + 56) == 47076830 )
    {
      sub_4F6CB00(a1: v20, a2: v21, a3: v38, a4: v19, a5: v39);
      sub_AF11E40(
        a1: v38,
        a2: v23,
        a3: v6 + 376659232,
        a4: v22,
        a5: v6 + 8LL * *(unsigned int *)(v38 + 12),
        a6: v38);
      sub_5A98320(a1: v25, a2: v26, a3: v34, a4: v24, a5: 1);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280();
      return 1;
    }
    else
    {
      sub_5A98320(a1: v20, a2: v21, a3: v34, a4: v19, a5: 1);
      if ( *(int *)(v7 + 16) <= 0 )
        sub_277F280();
      return 0;
    }
  }
  v37 = a6;
  sub_2771080();
LABEL_27:
  v37 = a6;
  sub_2771080();
LABEL_28:
  LODWORD(i) = sub_2771080();
LABEL_29:
  sub_2771220(a1: v13, a2: v14, a3: (unsigned int)i, a4: v17, a5: (unsigned int)v17, a6: v37);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_1EC3780(a1: v29, a2: v30, a3: v27, a4: v28, a5: v31, a6: v32);
}
