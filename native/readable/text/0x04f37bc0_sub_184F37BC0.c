// sub_4F37BC0
// rva 0x04f37bc0  size 701  section .text  group text
// window base 0x184f37bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F37BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]
  __int64 v24; // [rsp+18h] [rbp-30h]
  unsigned int v25; // [rsp+24h] [rbp-24h]
  unsigned int v26; // [rsp+28h] [rbp-20h]
  unsigned int v27; // [rsp+2Ch] [rbp-1Ch]
  int v28; // [rsp+30h] [rbp-18h]
  unsigned int v29; // [rsp+34h] [rbp-14h]
  unsigned int v30; // [rsp+38h] [rbp-10h]
  unsigned int v31; // [rsp+3Ch] [rbp-Ch]
  __int64 v32; // [rsp+40h] [rbp-8h]

  v24 = a3;
  v23 = a1;
  v31 = a4;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v9 + 8) )
  {
    v30 = a2;
    v29 = a6;
    v28 = a5;
    sub_1EB84E0();
LABEL_29:
    sub_2771080();
    goto LABEL_30;
  }
  v10 = a4 - a2;
  if ( a5 == 0 )
  {
    v30 = a2;
    v29 = a6;
    v28 = 0;
    if ( a1 != v8 )
    {
      if ( *(_BYTE *)(a1 + 12) != 0 )
      {
        v32 = v7;
        v27 = v29;
        v12 = v30;
        while ( (int)a4 > v12 )
        {
          v26 = v12;
          v13 = sub_4FEBC20(a1, a2, a3: a1, a4, a5: (unsigned int)v12);
          if ( v13 >= 0x100 )
          {
            v25 = v13;
            LODWORD(v6) = v27;
            v19 = sub_4F395A0(a1: v15, a2, a3: v24, a4: v14, a5: v27);
            v20 = *(unsigned int *)(v23 + 4);
            if ( (_DWORD)v20 == 0 )
              goto LABEL_36;
            v22 = v19;
            sub_1EB4960(a1: 2 * v27, a2: 2 * (v31 - v26), a3: v8 + 8 * v20, a4: v31, a5: 2 * v26, a6: v19);
            if ( *(int *)(v9 + 16) <= 0 )
              sub_277F280();
            return v22;
          }
          v16 = v24;
          v17 = v27 + 1;
          if ( v24 == v8 )
            goto LABEL_35;
          LODWORD(v6) = *(_DWORD *)(v24 + 8);
          if ( (unsigned int)v6 <= v27 )
            goto LABEL_37;
          LODWORD(v6) = v27;
          *(_BYTE *)(v24 + v27 + 12) = v13;
          v12 = v26 + 1;
          v27 = v17;
          a4 = v31;
          a1 = v23;
        }
        goto LABEL_8;
      }
      v18 = *(unsigned int *)(a1 + 4);
      if ( (_DWORD)v18 != 0 )
      {
        if ( v24 != v8 )
        {
          sub_1EB4960(a1: v29, a2: v10, a3: v8 + 8 * v18, a4: v24, a5: v30, a6: v24);
          goto LABEL_8;
        }
        goto LABEL_33;
      }
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  if ( a1 == v8 )
  {
LABEL_30:
    v30 = a2;
    v29 = a6;
    v28 = a5;
    sub_2771080();
LABEL_31:
    sub_2771080();
LABEL_32:
    v30 = a2;
    v29 = a6;
    v28 = a5;
    sub_2771080();
LABEL_33:
    sub_2771080();
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 12) == 0 )
  {
    v30 = a2;
    v29 = a6;
    v28 = a5;
    sub_5022000(a1: (unsigned int)a2, a2: v31, a3, a4, a5: a6, a6: v23);
    goto LABEL_8;
  }
  v6 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v6 == 0 )
    goto LABEL_32;
  if ( a3 != v8 )
  {
    v28 = a5;
    v29 = a6;
    v30 = a2;
    sub_1EB4960(a1: 2 * a6, a2: 2 * v10, a3: v8 + 8 * v6, a4, a5: (unsigned int)(2 * a2), a6: a3);
LABEL_8:
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return v24;
  }
LABEL_34:
  v30 = a2;
  v29 = a6;
  v13 = sub_2771080();
LABEL_35:
  v25 = v13;
  sub_2771080(a1: v15, a2, a3: v16, a4: v17);
LABEL_36:
  sub_2771080();
LABEL_37:
  sub_2771220(a1: v23, a2: v16, a3: v27, a4: v17, a5: (unsigned int)v6, a6: v26);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_4F37E80();
}
