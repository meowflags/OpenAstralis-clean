// sub_1815A3920
// rva 0x015a3920  size 1066  section .text  group text
// window base 0x1815a3920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A3920(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  unsigned int *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // r11
  unsigned int *v18; // rbx
  __int64 (__fastcall *v19)(__int64, unsigned int *, unsigned int *); // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, __int64, unsigned int *, _QWORD, unsigned int *); // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  __int64 result; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD v36[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int *v37; // [rsp+20h] [rbp-48h]
  unsigned int v38; // [rsp+2Ch] [rbp-3Ch]
  unsigned int *v39; // [rsp+30h] [rbp-38h]
  __int64 v40; // [rsp+38h] [rbp-30h]
  unsigned int *v41; // [rsp+40h] [rbp-28h]
  unsigned int *v42; // [rsp+48h] [rbp-20h]
  unsigned int v43; // [rsp+54h] [rbp-14h]
  int v44; // [rsp+58h] [rbp-10h]
  unsigned int v45; // [rsp+5Ch] [rbp-Ch]
  unsigned int v46; // [rsp+60h] [rbp-8h]
  unsigned int v47; // [rsp+64h] [rbp-4h]

  v42 = a3;
  v41 = a5;
  if ( (unsigned __int64)v36 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_38:
    v30 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v30 + 48) <= *(_QWORD *)(v9 + 32) )
    {
      *(_QWORD *)(v9 + 40) = v30 + 48;
      *(_DWORD *)v30 = 34101256;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
      *(_QWORD *)(v30 + 24) = 0;
      *(_QWORD *)(v30 + 32) = 0;
      *(_QWORD *)(v30 + 40) = 0;
LABEL_40:
      *(_DWORD *)(v30 + 20) = 46923644;
      *(_DWORD *)(v30 + 16) = v8[93585974];
      *(_DWORD *)(v30 + 12) = (unsigned __int64)(v30 - (_QWORD)v8) >> 3;
      v40 = v30;
      MEMORY[0x18503B9A0](a1, a2, a3: v30, a4, a5: 0);
      v34 = v40;
      goto LABEL_41;
    }
LABEL_50:
    v30 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    goto LABEL_40;
  }
  if ( a5 == v8 )
    goto LABEL_38;
  v10 = a3[1];
  v40 = (__int64)&v8[2 * v10];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_42;
  v11 = v8[2 * v10 + 3];
  v12 = a3[4];
  v13 = &v8[2 * v11];
  v39 = v13;
  if ( (v12 & 0x80000000) == 0 )
  {
    v14 = a3[6];
    goto LABEL_6;
  }
  v14 = v8[2 * v10 + 11];
  a3[6] = v14;
  if ( (_DWORD)v11 == 0 )
  {
    MEMORY[0x182771080]();
LABEL_48:
    MEMORY[0x182771220](a1: v14, a2: v13, a3: v43, a4: v43, a5: (unsigned int)v15);
LABEL_49:
    MEMORY[0x182770780](a1: v14, a2: v21, a3: v22, a4: v43);
    goto LABEL_50;
  }
  v12 = v8[2 * v11 + 2];
  a3[4] = v12;
LABEL_6:
  v47 = v14;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_43;
  v46 = v12;
  v15 = v8[2 * v11 + 2];
  if ( v12 > (unsigned int)v15 )
  {
    v28 = v12;
    result = v47;
  }
  else
  {
    v16 = a3[3];
    if ( v16 < 0 )
    {
      v28 = v12;
      result = v47;
    }
    else
    {
      v38 = v10;
      a3[3] = v12;
      v17 = a3[2];
      if ( (int)v12 > v16 || (_DWORD)v17 != 0 )
      {
        v45 = v15;
        a3[2] = 0;
        v44 = (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                                 + 3
                                 + (v8[2 * (*a5 >> 3) + 11] & (0x636u >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))];
        v43 = v16;
        v18 = &v8[2 * v17];
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v18 == v8 )
            {
              v27 = v43 + 1;
              if ( (unsigned int)v15 <= v43 )
                goto LABEL_48;
              v13 = v39;
              a3 = &v8[2 * v39[v43 + 3]];
            }
            else
            {
              v19 = (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *))(v7
                                                                                    + *(_QWORD *)&v8[2 * (*v18 >> 3) + 38]);
              v37 = v18;
              v20 = v19(a1: v14, a2: v13, a3: v18);
              if ( (unsigned int *)v20 == v8 )
              {
                a3 = &v8[2 * v37[6]];
                v27 = v43;
                v15 = v45;
                v13 = v39;
              }
              else
              {
                v22 = &v8[2 * v37[5]];
                if ( v44 != 1590 )
                  goto LABEL_49;
                v37 = &v8[2 * v37[6]];
                v36[3] = v20;
                v23 = *v41 >> 3;
                v24 = v8[2 * v23 + 11];
                v25 = (unsigned int)v24 & (0x636u >> HIBYTE(v8[2 * v23 + 11]));
                v26 = (void (__fastcall *)(__int64, __int64, unsigned int *, _QWORD, unsigned int *))(v7 + *(_QWORD *)((char *)&v8[2 * v23] + HIWORD(v8[2 * v8[2 * v23 + 5] + 3 + v25])));
                v36[2] = v22;
                v26(a1: v25, a2: v24, a3: v41, a4: v26, a5: v22);
                a3 = v37;
                v27 = v43;
                v15 = v45;
                v13 = v39;
              }
            }
            if ( a3 == v8 )
              break;
            if ( *(int *)(v9 + 16) <= 0 )
              v27 = MEMORY[0x18277F280](a1: v14, a2: v13, a3, a4: v46, a5, a6: v15);
            v18 = a3;
            v43 = v27;
          }
          v28 = v46;
          if ( (int)v46 <= v27 )
            break;
          if ( *(int *)(v9 + 16) <= 0 )
            v27 = MEMORY[0x18277F280](a1: v14, a2: v13, a3, a4: v46, a5, a6: v15);
          v18 = a3;
          v43 = v27;
        }
        result = v47;
        v10 = v38;
      }
      else
      {
        v28 = v12;
        result = v47;
      }
    }
  }
  if ( (_DWORD)result != v8[2 * v10 + 11] )
  {
    while ( 1 )
    {
      v35 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v35 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v35 = MEMORY[0x181EAA920](a1: v14, a2: v13, a3: 34449872, a4: v28);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v35 + 40;
        *(_DWORD *)v35 = 34449872;
        *(_DWORD *)(v35 + 4) = 0;
        *(_QWORD *)(v35 + 8) = 0;
        *(_QWORD *)(v35 + 16) = 0;
        *(_QWORD *)(v35 + 24) = 0;
        *(_QWORD *)(v35 + 32) = 0;
      }
      *(_DWORD *)(v35 + 20) = 46923644;
      *(_DWORD *)(v35 + 16) = v8[93585974];
      *(_DWORD *)(v35 + 12) = (unsigned __int64)(v35 - (_QWORD)v8) >> 3;
      v37 = (unsigned int *)v35;
      MEMORY[0x18503B9A0](a1: v14, a2: v13, a3: v35, a4: v28, a5: 0);
      v34 = (__int64)v37;
LABEL_41:
      MEMORY[0x182769900](a1: v32, a2: v33, a3: v34, a4: v31, a5: &a7);
LABEL_42:
      v12 = MEMORY[0x182771080]();
LABEL_43:
      MEMORY[0x182771080](a1: v14, a2: v13, a3, a4: v12);
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v14, a2: v13, a3, a4: v28);
  return result;
}
