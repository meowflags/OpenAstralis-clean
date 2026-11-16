// sub_181EC2F20
// rva 0x01ec2f20  size 1029  section .text  group text
// window base 0x181ec2f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC2F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  int v7; // ebx
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // bp
  __int64 v15; // rsi
  __int64 j; // rcx
  __int64 v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int i; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  char *v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  char *v43; // r9
  char v44; // [rsp+0h] [rbp-38h] BYREF
  char *v45; // [rsp+8h] [rbp-30h]
  __int64 v46; // [rsp+10h] [rbp-28h]
  int v47; // [rsp+18h] [rbp-20h]
  unsigned int v48; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v49; // [rsp+20h] [rbp-18h]
  int v50; // [rsp+24h] [rbp-14h]
  int v51; // [rsp+28h] [rbp-10h]
  unsigned int v52; // [rsp+2Ch] [rbp-Ch]
  int v53; // [rsp+30h] [rbp-8h]
  int v54; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    v13 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v44);
    goto LABEL_45;
  }
  if ( (_DWORD)a3 != 0 )
  {
    if ( (int)a3 < 0 )
    {
      if ( ((unsigned int)a3 & 0x7F000000) >> 24 == (_DWORD)a5 )
        v10 = a3 & 0xFFFFFF;
      else
        v10 = (unsigned int)a6;
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1, a2, a3, a4: v10);
      return (unsigned int)v10;
    }
    v12 = *((unsigned int *)v8 + 94162748);
    v13 = (__int64)&v8[8 * v12];
    if ( (_DWORD)v12 != 0 )
      v14 = *(_BYTE *)(v13 + (unsigned int)(a3 - 1) + 12);
    else
      v14 = *(_BYTE *)((unsigned int)(a3 - 1) + 0xCLL);
    v15 = v14;
    if ( (v14 & (unsigned __int8)a5) != 0 )
    {
      if ( (_DWORD)v12 != 0 )
      {
        v7 = 1;
        j = (unsigned int)a3;
        while ( v7 < 65 )
        {
          if ( (v7 & (unsigned int)v15) != 0 )
          {
            v17 = *(unsigned int *)(v13 + (int)j + 12);
            if ( v7 == (_DWORD)a5 )
              goto LABEL_31;
            a1 = (unsigned int)(j + 4);
            if ( *(int *)(v9 + 16) <= 0 )
              v13 = MEMORY[0x18277F280](a1);
            v7 *= 2;
            j = (unsigned int)a1;
          }
          else
          {
            if ( *(int *)(v9 + 16) <= 0 )
              v13 = MEMORY[0x18277F280](a1, a2: v15, a3, a4: j);
            v7 *= 2;
          }
        }
LABEL_45:
        v54 = v7;
        v53 = j;
        v52 = v15;
        v46 = v13;
        v51 = a6;
        v50 = a3;
        v49 = a5;
        v18 = MEMORY[0x1850130C0](a1: (unsigned int)a5, a2: v15, a3: 58);
        i = MEMORY[0x1850130C0](a1: v20, a2: v21, a3: v18, a4: v19, a5: v52);
        if ( (i & 0x80000000) != 0 )
          goto LABEL_51;
        v26 = *(char **)(v9 + 40);
        v27 = *(_QWORD *)(v9 + 32);
        v28 = (i + 19LL) & 0x1FFFFFFF8LL;
        v29 = 34082368;
        if ( v28 < 0x20000 )
          goto LABEL_55;
        while ( 1 )
        {
          v48 = i;
          v26 = (char *)sub_181EAA840(a1: v29, a2: v25, a3: v29, a4: v23, a5: i);
          for ( i = v48; ; *((_DWORD *)v26 + 2) = i )
          {
            v45 = v26;
            v48 = i;
            sub_181EB4960(a1: i, a2: 0, a3: (_DWORD *)v8 + 94087886, a4: (__int64)v26, a5: 0, a6: v26, a7: v44);
            v31 = MEMORY[0x185011920](a1: v52, a2: v8 + 58178576, a3: v48, a4: v30, a5: 0, a6: v45);
            v33 = MEMORY[0x185011920](a1: v49, a2: v8 + 58178600, a3: v31, a4: v32, a5: 0, a6: v45);
            v36 = *(_QWORD *)(v9 + 40);
            if ( (unsigned __int64)(v36 + 24) > *(_QWORD *)(v9 + 32) )
            {
              v47 = v33;
              v37 = sub_181EAA920(a1: v34, a2: v35, a3: 34082680);
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v36 + 24;
              *(_DWORD *)v36 = 34082680;
              *(_DWORD *)(v36 + 4) = 0;
              *(_QWORD *)(v36 + 8) = 0;
              *(_QWORD *)(v36 + 16) = 0;
              v37 = v36;
            }
            *(_DWORD *)(v37 + 4) = (unsigned __int64)(v45 - v8) >> 3;
            i = MEMORY[0x1828C1C40](a1: v34, a2: v35, a3: v37);
LABEL_51:
            v48 = i;
            v38 = *(_QWORD *)(v9 + 40);
            if ( (unsigned __int64)(v38 + 40) > *(_QWORD *)(v9 + 32) )
            {
              v38 = sub_181EAA920(a1: v24, a2: v25, a3: 34082880);
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v38 + 40;
              *(_DWORD *)v38 = 34082880;
              *(_DWORD *)(v38 + 4) = 0;
              *(_QWORD *)(v38 + 8) = 0;
              *(_QWORD *)(v38 + 16) = 0;
              *(_QWORD *)(v38 + 24) = 0;
              *(_QWORD *)(v38 + 32) = 0;
            }
            *(_DWORD *)(v38 + 20) = 46923644;
            *(_DWORD *)(v38 + 16) = *((_DWORD *)v8 + 93585974);
            *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - (_QWORD)v8) >> 3;
            v45 = (char *)v38;
            MEMORY[0x18503B9A0](a1: v24, a2: v25, a3: v38, a4: v23, a5: 0);
            v42 = (unsigned __int64)v45;
            *((_DWORD *)v45 + 2) = 46004603;
            if ( (*(_DWORD *)v42 & 2) != 0 )
            {
              v39 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
              if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v39) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v39) >> 9) + 0x38) = 0;
            }
            i = MEMORY[0x182769900](a1: v40, a2: v41, a3: v42, a4: v39, a5: &a7);
LABEL_55:
            v43 = &v26[v28];
            if ( (unsigned __int64)v43 > v27 )
              break;
            *(_QWORD *)(v9 + 40) = v43;
            *(_QWORD *)v26 = v29;
          }
        }
      }
      v7 = 1;
      for ( j = (unsigned int)a3; ; j = (unsigned int)a1 )
      {
        while ( 1 )
        {
          if ( v7 >= 65 )
            goto LABEL_45;
          if ( (v7 & (unsigned int)v15) != 0 )
            break;
          if ( *(int *)(v9 + 16) <= 0 )
            v13 = MEMORY[0x18277F280](a1, a2: v15, a3, a4: j);
          v7 *= 2;
        }
        v17 = *(unsigned int *)((int)j + 0xCLL);
        if ( v7 == (_DWORD)a5 )
          break;
        a1 = (unsigned int)(j + 4);
        if ( *(int *)(v9 + 16) <= 0 )
          v13 = MEMORY[0x18277F280](a1);
        v7 *= 2;
      }
LABEL_31:
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v17);
      return (unsigned int)v17;
    }
    else
    {
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return (unsigned int)a6;
    }
  }
  else
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (unsigned int)a6;
  }
}
