// sub_50595C0
// rva 0x050595c0  size 2113  section .text  group text
// window base 0x1850595c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_50595C0(__int64 a1, __int64 a2, char *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // rbp
  char *v13; // rax
  __int64 (*v14)(void); // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-48h] BYREF
  char *v42; // [rsp+10h] [rbp-38h]
  __int64 v43; // [rsp+18h] [rbp-30h]
  char *v44; // [rsp+20h] [rbp-28h]
  char *v45; // [rsp+28h] [rbp-20h]
  __int64 v46; // [rsp+30h] [rbp-18h]
  unsigned int v47; // [rsp+3Ch] [rbp-Ch]
  __int64 v48; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v41 <= v9[1] )
  {
    v44 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    if ( (unsigned __int16)*(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * (*(_DWORD *)a3 >> 3) + 20]
                                        + 12
                                        + 4
                                        * (*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44]
                                         & (0x568u >> HIBYTE(*(_DWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 44])))] == 1384 )
    {
      v10 = *(_DWORD *)a3 >> 3;
      v11 = &v8[8 * *(unsigned int *)&v8[8 * v10 + 20]];
      v12 = *(_DWORD *)&v8[8 * v10 + 44] & (0x568u >> HIBYTE(*(_DWORD *)&v8[8 * v10 + 44]));
      v13 = &v8[8 * v10];
      v14 = (__int64 (*)(void))(v7 + *(_QWORD *)&v13[HIWORD(*(_DWORD *)&v11[4 * v12 + 12]) + 32]);
      v45 = v13;
      v44 = a3;
      v43 = (__int64)v11;
      v47 = v12;
      v15 = v14();
      v19 = 34081944;
      if ( v15 == 0 )
      {
        v46 = 34081944;
        v20 = ((__int64 (__fastcall *)(__int64, __int64, char *, __int64, _QWORD))(v7
                                                                                 + *(_QWORD *)&v45[HIWORD(*(_DWORD *)(v43 + 4LL * v47 + 12))]))(
                a1: v17,
                a2: v18,
                a3: v44,
                a4: v43,
                a5: 0);
        if ( (unsigned int)v20 <= 0x5B )
          __asm { jmp     rdx; switch jump }
        while ( 1 )
        {
          v47 = v20;
          v28 = v9[5];
          if ( (unsigned __int64)(v28 + 24) > v9[4] )
          {
            v28 = sub_1EAA920(a1: v21, a2: v22, a3: 34085680);
          }
          else
          {
            v9[5] = v28 + 24;
            *(_DWORD *)v28 = 34085680;
            *(_DWORD *)(v28 + 4) = 0;
            *(_QWORD *)(v28 + 8) = 0;
            *(_QWORD *)(v28 + 16) = 0;
          }
          v43 = v28;
          v29 = v9[5];
          v30 = v29 + 32;
          if ( (unsigned __int64)(v29 + 32) > v9[4] )
          {
            v29 = sub_1EAA840(a1: v21, a2: v22, a3: 34082368, a4: v30, a5: 16);
            v28 = v43;
          }
          else
          {
            v9[5] = v30;
            *(_QWORD *)v29 = 34082368;
            *(_DWORD *)(v29 + 8) = 16;
            *(_DWORD *)(v29 + 12) = 0;
            *(_QWORD *)(v29 + 16) = 0;
            *(_QWORD *)(v29 + 24) = 0;
          }
          *(_DWORD *)(v28 + 4) = (unsigned __int64)(v29 - (_QWORD)v8) >> 3;
          if ( (*(_DWORD *)v28 & 2) != 0 )
          {
            v30 = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v30) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v28 & 0xFFFFFFFFFFF80000LL) + ((v28 - v30) >> 9) + 0x38) = 0;
          }
          sub_4F36F80(a1: v21, a2: v22, a3: v28, a4: v30, a5: v8 + 371874584);
          sub_500AEA0(a1: v32, a2: v33, a3: v43, a4: v31, a5: v44);
          v37 = v43;
          if ( *(_DWORD *)(v43 + 8) != 0 )
          {
            v38 = v9[5];
            if ( (unsigned __int64)(v38 + 24) > v9[4] )
            {
              v38 = sub_1EAA920(a1: v35, a2: v36, a3: 34082680);
              v39 = v43;
            }
            else
            {
              v9[5] = v38 + 24;
              *(_DWORD *)v38 = 34082680;
              *(_DWORD *)(v38 + 4) = 0;
              *(_QWORD *)(v38 + 8) = 0;
              *(_QWORD *)(v38 + 16) = 0;
              v39 = v37;
            }
            v42 = (char *)v38;
            sub_4FE9280(a1: v35, a2: v36, a3: v38, a4: v34, a5: v39, a6: v8);
            v48 = v7;
            v45 = v42;
          }
          else
          {
            v45 = v8 + 373281248;
          }
          v40 = v9[5];
          if ( (unsigned __int64)(v40 + 40) > v9[4] )
          {
            v40 = sub_1EAA920(a1: v35, a2: v36, a3: v46);
          }
          else
          {
            v9[5] = v40 + 40;
            *(_DWORD *)v40 = 34081944;
            *(_DWORD *)(v40 + 4) = 0;
            *(_QWORD *)(v40 + 8) = 0;
            *(_QWORD *)(v40 + 16) = 0;
            *(_QWORD *)(v40 + 24) = 0;
            *(_QWORD *)(v40 + 32) = 0;
          }
          *(_DWORD *)(v40 + 20) = 46923644;
          *(_DWORD *)(v40 + 16) = *((_DWORD *)v8 + 93585974);
          *(_DWORD *)(v40 + 12) = (unsigned __int64)(v40 - (_QWORD)v8) >> 3;
          v42 = (char *)v40;
          sub_503B9A0(a1: v35, a2: v36, a3: (unsigned int *)v40, a4: v34, a5: 0);
          v27 = (unsigned __int64)v42;
          *((_DWORD *)v42 + 2) = (unsigned __int64)(v45 - v8) >> 3;
          if ( (*(_DWORD *)v27 & 2) != 0 )
          {
            v24 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) = 0;
          }
LABEL_13:
          LODWORD(v20) = sub_2769900(a1: v25, a2: v26, a3: v27, a4: v24, a5: &a7);
        }
      }
LABEL_10:
      v46 = v19;
      v23 = v9[5];
      if ( (unsigned __int64)(v23 + 40) > v9[4] )
      {
        v23 = sub_1EAA920(a1: v17, a2: v18, a3: v46);
      }
      else
      {
        v9[5] = v23 + 40;
        *(_DWORD *)v23 = 34081944;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 24) = 0;
        *(_QWORD *)(v23 + 32) = 0;
      }
      *(_DWORD *)(v23 + 20) = 46923644;
      *(_DWORD *)(v23 + 16) = *((_DWORD *)v8 + 93585974);
      *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - (_QWORD)v8) >> 3;
      v42 = (char *)v23;
      sub_503B9A0(a1: v17, a2: v18, a3: (unsigned int *)v23, a4: v16, a5: 0);
      v27 = (unsigned __int64)v42;
      *((_DWORD *)v42 + 2) = 46360347;
      if ( (*(_DWORD *)v27 & 2) != 0 )
      {
        v24 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) = 0;
      }
      goto LABEL_13;
    }
LABEL_9:
    v44 = a3;
    sub_2770780();
    goto LABEL_10;
  }
  sub_2771080();
  goto LABEL_9;
}
