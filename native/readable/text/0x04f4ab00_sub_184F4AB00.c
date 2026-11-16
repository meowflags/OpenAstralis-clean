// sub_4F4AB00
// rva 0x04f4ab00  size 1702  section .text  group text
// window base 0x184f4ab00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4AB00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 i; // rcx
  int j; // r10d
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  __int64 v19; // r11
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // r11d
  unsigned int v24; // r10d
  __int64 v25; // r11
  unsigned int v26; // ebx
  int v27; // r11d
  __int64 v28; // r10
  unsigned int v29; // r11d
  unsigned int v30; // r11d
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+10h] [rbp-38h]
  __int64 v41; // [rsp+18h] [rbp-30h]
  unsigned int v42; // [rsp+20h] [rbp-28h]
  int v43; // [rsp+24h] [rbp-24h]
  int v44; // [rsp+28h] [rbp-20h]
  int v45; // [rsp+2Ch] [rbp-1Ch]
  int v46; // [rsp+30h] [rbp-18h]
  int v47; // [rsp+34h] [rbp-14h]
  int v48; // [rsp+38h] [rbp-10h]
  int v49; // [rsp+3Ch] [rbp-Ch]
  __int64 v50; // [rsp+40h] [rbp-8h]

  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_78;
  }
  v12 = *(_DWORD *)(v10 + 374343896);
  v42 = v12;
  v13 = 34176760;
  v50 = 34176760;
  if ( (int)a2 >= 0 )
  {
    LODWORD(v7) = a6 + a5;
    if ( a6 + a5 <= (int)a1 )
    {
      LODWORD(v8) = a1;
      LODWORD(i) = 0;
      goto LABEL_5;
    }
    if ( (int)a2 < 1 )
    {
      LODWORD(v8) = a1;
      LODWORD(i) = 0;
LABEL_5:
      if ( (int)a2 <= (int)i )
        goto LABEL_6;
LABEL_78:
      v31 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v31 + 40) <= *(_QWORD *)(v11 + 32) )
      {
        *(_QWORD *)(v11 + 40) = v31 + 40;
        *(_DWORD *)v31 = 34176760;
        *(_DWORD *)(v31 + 4) = 0;
        *(_QWORD *)(v31 + 8) = 0;
        *(_QWORD *)(v31 + 16) = 0;
        *(_QWORD *)(v31 + 24) = 0;
        *(_QWORD *)(v31 + 32) = 0;
        v45 = i;
        v43 = v8;
        v44 = v7;
        v32 = v42;
        v49 = a2;
        v48 = a1;
        v47 = a6;
        v46 = a5;
        v41 = a3;
LABEL_80:
        *(_DWORD *)(v31 + 20) = 46923644;
        *(_DWORD *)(v31 + 16) = v32;
        v33 = (unsigned __int64)(v31 - v10) >> 3;
        *(_DWORD *)(v31 + 12) = v33;
        v40 = v31;
        sub_503B9A0(a1, a2, a3: v31, a4: v33, a5: 0);
        while ( 1 )
        {
          v12 = sub_2769900(a1: v35, a2: v36, a3: v40, a4: v34, a5: &a7);
LABEL_82:
          v37 = v12;
          v49 = a2;
          v48 = a1;
          v47 = a6;
          v46 = a5;
          v41 = a3;
          v38 = *(_QWORD *)(v11 + 40);
          if ( (unsigned __int64)(v38 + 40) > *(_QWORD *)(v11 + 32) )
          {
            v45 = j;
            v44 = v7;
            v38 = sub_1EAA920(a1, a2, a3: v50, a4: v12);
            v37 = v42;
          }
          else
          {
            *(_QWORD *)(v11 + 40) = v38 + 40;
            *(_DWORD *)v38 = 34176760;
            *(_DWORD *)(v38 + 4) = 0;
            *(_QWORD *)(v38 + 8) = 0;
            *(_QWORD *)(v38 + 16) = 0;
            *(_QWORD *)(v38 + 24) = 0;
            *(_QWORD *)(v38 + 32) = 0;
            v45 = j;
            v44 = v7;
          }
          *(_DWORD *)(v38 + 20) = 46923644;
          *(_DWORD *)(v38 + 16) = v37;
          *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - v10) >> 3;
          v40 = v38;
          sub_503B9A0(a1, a2, a3: v38, a4: v37, a5: 0);
        }
      }
LABEL_95:
      v45 = i;
      v43 = v8;
      v44 = v7;
      v49 = a2;
      v48 = a1;
      v47 = a6;
      v46 = a5;
      v41 = a3;
      v31 = sub_1EAA920(a1, a2, a3: v50);
      v32 = v42;
      goto LABEL_80;
    }
    v8 = (unsigned int)(a1 + 1);
    if ( a3 != v10 )
    {
      v17 = *(_DWORD *)(a3 + 8);
      if ( v17 > (unsigned int)a1 )
      {
        v18 = *(unsigned __int16 *)(a3 + 2LL * (unsigned int)a1 + 12);
        if ( v18 < 0xD800 || v18 >= 0xDC00 || (int)v7 <= (int)v8 )
        {
LABEL_18:
          for ( i = 1; ; i = v20 )
          {
            while ( 1 )
            {
              if ( (int)v7 <= (int)v8 || (int)a2 <= (int)i )
                goto LABEL_5;
              v19 = (unsigned int)(v8 + 1);
              if ( v17 <= (unsigned int)v8 )
                goto LABEL_91;
              LODWORD(v9) = *(unsigned __int16 *)(a3 + 2 * v8 + 12);
              v20 = i + 1;
              if ( (unsigned int)v9 < 0xD800 || (unsigned int)v9 >= 0xDC00 )
                break;
              if ( (int)v7 > (int)v19 )
              {
                if ( v17 <= (unsigned int)v19 )
                  goto LABEL_94;
                if ( *(int *)(v11 + 16) <= 0 )
                  v20 = sub_277F280();
                v21 = *(unsigned __int16 *)(a3 + 2 * v19 + 12);
                if ( v21 < 0xDC00 )
                {
                  v8 = (unsigned int)v19;
                  i = v20;
                }
                else
                {
                  if ( v21 >= 0xE000 )
                    v8 = (unsigned int)v19;
                  else
                    v8 = (unsigned int)(v8 + 2);
                  i = v20;
                }
              }
              else if ( *(int *)(v11 + 16) <= 0 )
              {
LABEL_37:
                v22 = sub_277F280();
                v8 = v23;
                i = v22;
              }
              else
              {
                v8 = (unsigned int)v19;
                i = v20;
              }
            }
            if ( *(int *)(v11 + 16) <= 0 )
              goto LABEL_37;
            v8 = (unsigned int)v19;
          }
        }
        if ( v17 > (unsigned int)v8 )
        {
          v30 = *(unsigned __int16 *)(a3 + 2 * v8 + 12);
          if ( v30 >= 0xDC00 && v30 < 0xE000 )
            v8 = (unsigned int)(a1 + 2);
          goto LABEL_18;
        }
LABEL_92:
        v44 = v7;
        v49 = a2;
        v48 = a1;
        v47 = a6;
        v46 = a5;
        v41 = a3;
        sub_2771220(a1, a2, a3: (unsigned int)v8, a4: v13, a5: v17);
LABEL_93:
        v49 = a2;
        v48 = a1;
        v47 = a6;
        v46 = a5;
        v41 = a3;
        sub_2771220(a1, a2, a3: (unsigned int)v9, a4: v13, a5: (unsigned int)v8);
LABEL_94:
        v44 = v7;
        v49 = a2;
        v48 = a1;
        v47 = a6;
        v46 = a5;
        v41 = a3;
        sub_2771220(a1, a2, a3: (unsigned int)v19, a4: i, a5: v17);
        goto LABEL_95;
      }
      goto LABEL_88;
    }
LABEL_87:
    v44 = v7;
    v49 = a2;
    v48 = a1;
    v47 = a6;
    v46 = a5;
    sub_2771080();
LABEL_88:
    v44 = v7;
    v49 = a2;
    v48 = a1;
    v47 = a6;
    v46 = a5;
    v41 = a3;
    sub_2771220(a1, a2, a3: (unsigned int)a1, a4: v13, a5: v17);
LABEL_89:
    v49 = a2;
    v48 = a1;
    v47 = a6;
    v46 = a5;
    v41 = a3;
    sub_2771220(a1, a2, a3: (unsigned int)v25, a4: v13, a5: (unsigned int)v8);
    goto LABEL_90;
  }
  if ( (int)a1 > a5 )
  {
    v7 = (unsigned int)(a1 - 1);
    if ( a3 == v10 )
    {
      v49 = a2;
      v48 = a1;
      v47 = a6;
      v46 = a5;
      sub_2771080();
    }
    else
    {
      LODWORD(v8) = *(_DWORD *)(a3 + 8);
      if ( (unsigned int)v8 > (unsigned int)v7 )
      {
        v24 = *(unsigned __int16 *)(a3 + 2 * v7 + 12);
        if ( v24 >= 0xDC00 && v24 < 0xE000 && (int)v7 > a5 )
        {
          v28 = (unsigned int)(a1 - 2);
          if ( (unsigned int)v8 <= (unsigned int)v28 )
          {
LABEL_90:
            v49 = a2;
            v48 = a1;
            v47 = a6;
            v46 = a5;
            v41 = a3;
            sub_2771220(a1, a2, a3: (unsigned int)v28, a4: v13, a5: (unsigned int)v8);
LABEL_91:
            v44 = v7;
            v49 = a2;
            v48 = a1;
            v47 = a6;
            v46 = a5;
            v41 = a3;
            sub_2771220(a1, a2, a3: (unsigned int)v8, a4: i, a5: v17);
            goto LABEL_92;
          }
          v29 = *(unsigned __int16 *)(a3 + 2 * v28 + 12);
          if ( v29 >= 0xD800 && v29 < 0xDC00 )
            LODWORD(v7) = a1 - 2;
        }
        for ( j = a2 + 1; ; ++j )
        {
          while ( 1 )
          {
            if ( (int)v7 <= a5 || j >= 0 )
              goto LABEL_11;
            v25 = (unsigned int)(v7 - 1);
            if ( (unsigned int)v8 <= (unsigned int)v25 )
              goto LABEL_89;
            LODWORD(v9) = *(unsigned __int16 *)(a3 + 2 * v25 + 12);
            v13 = (unsigned int)(j + 1);
            if ( (unsigned int)v9 < 0xDC00 || (unsigned int)v9 >= 0xE000 )
              break;
            if ( (int)v25 > a5 )
            {
              v9 = (unsigned int)(v7 - 2);
              if ( (unsigned int)v8 <= (unsigned int)v9 )
                goto LABEL_93;
              if ( *(int *)(v11 + 16) <= 0 )
                v12 = sub_277F280(a1, a2, a3, a4: v13);
              v26 = *(unsigned __int16 *)(a3 + 2 * v9 + 12);
              if ( v26 < 0xD800 )
              {
                LODWORD(v7) = v25;
                j = v13;
              }
              else
              {
                if ( v26 >= 0xDC00 )
                  LODWORD(v7) = v25;
                else
                  LODWORD(v7) = v9;
                j = v13;
              }
            }
            else if ( *(int *)(v11 + 16) <= 0 )
            {
LABEL_62:
              v12 = sub_277F280(a1, a2, a3, a4: v13);
              LODWORD(v7) = v27;
              j = v13;
            }
            else
            {
              LODWORD(v7) = v7 - 1;
              ++j;
            }
          }
          if ( *(int *)(v11 + 16) <= 0 )
            goto LABEL_62;
          LODWORD(v7) = v7 - 1;
        }
      }
    }
    v49 = a2;
    v48 = a1;
    v47 = a6;
    v46 = a5;
    v41 = a3;
    sub_2771220(a1, a2, a3: (unsigned int)v7, a4: v13, a5: (unsigned int)v8);
    goto LABEL_87;
  }
  j = a2;
  LODWORD(v7) = a1;
LABEL_11:
  if ( j < 0 )
    goto LABEL_82;
  LODWORD(v8) = v7;
LABEL_6:
  if ( *(int *)(v11 + 16) <= 0 )
    sub_277F280();
  return (unsigned int)v8;
}
