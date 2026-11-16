// sub_1815A2EA0
// rva 0x015a2ea0  size 1108  section .text  group text
// window base 0x1815a2ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A2EA0(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r9d
  int v16; // r10d
  __int64 v17; // r11
  _DWORD *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // r9
  _DWORD *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  unsigned int v29; // r9d
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD v38[3]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v39; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+20h] [rbp-48h]
  unsigned int v41; // [rsp+2Ch] [rbp-3Ch]
  _DWORD *v42; // [rsp+30h] [rbp-38h]
  __int64 v43; // [rsp+38h] [rbp-30h]
  _DWORD *v44; // [rsp+40h] [rbp-28h]
  unsigned int *v45; // [rsp+48h] [rbp-20h]
  unsigned int v46; // [rsp+54h] [rbp-14h]
  int v47; // [rsp+58h] [rbp-10h]
  unsigned int v48; // [rsp+5Ch] [rbp-Ch]
  int v49; // [rsp+60h] [rbp-8h]
  unsigned int v50; // [rsp+64h] [rbp-4h]

  v45 = a3;
  v44 = a5;
  if ( (unsigned __int64)v38 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_41:
    v32 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v32 + 48) <= *(_QWORD *)(v9 + 32) )
    {
      *(_QWORD *)(v9 + 40) = v32 + 48;
      *(_DWORD *)v32 = 34101256;
      *(_DWORD *)(v32 + 4) = 0;
      *(_QWORD *)(v32 + 8) = 0;
      *(_QWORD *)(v32 + 16) = 0;
      *(_QWORD *)(v32 + 24) = 0;
      *(_QWORD *)(v32 + 32) = 0;
      *(_QWORD *)(v32 + 40) = 0;
LABEL_43:
      *(_DWORD *)(v32 + 20) = 46923644;
      *(_DWORD *)(v32 + 16) = v8[93585974];
      *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - (_QWORD)v8) >> 3;
      v43 = v32;
      MEMORY[0x18503B9A0](a1, a2, a3: v32, a4, a5: 0);
      v36 = v43;
      goto LABEL_44;
    }
LABEL_53:
    v32 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    goto LABEL_43;
  }
  if ( a5 == v8 )
    goto LABEL_41;
  v10 = a3[1];
  v43 = (__int64)&v8[2 * v10];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_45;
  v11 = (unsigned int)v8[2 * v10 + 3];
  v12 = a3[4];
  v13 = &v8[2 * v11];
  v42 = v13;
  if ( v12 >= 0 )
  {
    v14 = a3[6];
    goto LABEL_6;
  }
  v14 = (unsigned int)v8[2 * v10 + 11];
  a3[6] = v14;
  if ( (_DWORD)v11 == 0 )
  {
    MEMORY[0x182771080]();
LABEL_51:
    MEMORY[0x182771220](a1: v14, a2: v13, a3: v46, a4: v11, a5: v29);
LABEL_52:
    MEMORY[0x182770780](a1: v23, a2: v25, a3: v21, a4: v11, a5: v22, a6: v24);
    goto LABEL_53;
  }
  v12 = v8[2 * v11 + 2];
  a3[4] = v12;
LABEL_6:
  v50 = v14;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_46;
  v49 = v12;
  v15 = v8[2 * v11 + 2];
  if ( v12 > v15 )
  {
    v30 = (unsigned int)v10;
    result = v50;
  }
  else
  {
    v16 = a3[3];
    if ( v16 < 0 )
    {
      v30 = (unsigned int)v10;
      result = v50;
    }
    else
    {
      v41 = v10;
      a3[3] = v12;
      v17 = a3[2];
      if ( v12 > v16 || (_DWORD)v17 != 0 )
      {
        v48 = v15;
        a3[2] = 0;
        v47 = (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                                 + 3
                                 + (v8[2 * (*a5 >> 3) + 11] & (0x636u >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))];
        v11 = (unsigned __int64)(v8 + 94153502);
        v40 = (__int64)(v8 + 94153502);
        v46 = v16;
        v18 = &v8[2 * v17];
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v18 == v8 )
            {
              v29 = v48;
              v28 = v46 + 1;
              if ( v48 <= v46 )
                goto LABEL_51;
              v13 = v42;
              v11 = (unsigned __int64)&v8[2 * v42[v46 + 3]];
            }
            else
            {
              v19 = *(_QWORD *)&v8[2 * (*v18 >> 3) + 38];
              v39 = v18;
              v20 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7 + v19))(a1: v14, a2: v13, a3: v18);
              v11 = (unsigned __int64)&v8[2 * v39[6]];
              if ( (_DWORD *)v20 == v8 )
              {
                v28 = v46;
              }
              else
              {
                if ( v40 == v20 )
                  v23 = (__int64)v8;
                else
                  v23 = v20;
                v24 = v48;
                v25 = v42;
                if ( v47 != 1590 )
                  goto LABEL_52;
                v39 = &v8[2 * v39[6]];
                v38[2] = v20;
                v26 = *v44 >> 3;
                v27 = *(_QWORD *)((char *)&v8[2 * v26]
                                + HIWORD(v8[2 * v8[2 * v26 + 5]
                                          + 3
                                          + (v8[2 * v26 + 11] & (0x636u >> HIBYTE(v8[2 * v26 + 11])))]));
                v38[1] = v23;
                ((void (__fastcall *)(__int64, _DWORD *, _DWORD *, __int64, __int64, _QWORD))(v7 + v27))(
                  a1: v23,
                  a2: v42,
                  a3: v44,
                  a4: v27,
                  a5: v23,
                  a6: v48);
                v11 = (unsigned __int64)v39;
                v28 = v46;
              }
            }
            if ( (_DWORD *)v11 == v8 )
              break;
            if ( *(int *)(v9 + 16) <= 0 )
              v28 = MEMORY[0x18277F280]();
            v18 = (_DWORD *)v11;
            v46 = v28;
          }
          if ( v49 <= v28 )
            break;
          if ( *(int *)(v9 + 16) <= 0 )
            v28 = MEMORY[0x18277F280]();
          v18 = (_DWORD *)v11;
          v46 = v28;
        }
        result = v50;
        v30 = v41;
      }
      else
      {
        v30 = (unsigned int)v10;
        result = v50;
      }
    }
  }
  if ( (_DWORD)result != v8[2 * v30 + 11] )
  {
    while ( 1 )
    {
      v37 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v37 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v37 = MEMORY[0x181EAA920](a1: v14, a2: v13, a3: 34449872);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v37 + 40;
        *(_DWORD *)v37 = 34449872;
        *(_DWORD *)(v37 + 4) = 0;
        *(_QWORD *)(v37 + 8) = 0;
        *(_QWORD *)(v37 + 16) = 0;
        *(_QWORD *)(v37 + 24) = 0;
        *(_QWORD *)(v37 + 32) = 0;
      }
      *(_DWORD *)(v37 + 20) = 46923644;
      *(_DWORD *)(v37 + 16) = v8[93585974];
      *(_DWORD *)(v37 + 12) = (unsigned __int64)(v37 - (_QWORD)v8) >> 3;
      v40 = v37;
      MEMORY[0x18503B9A0](a1: v14, a2: v13, a3: v37, a4: v11, a5: 0);
      v36 = v40;
LABEL_44:
      MEMORY[0x182769900](a1: v34, a2: v35, a3: v36, a4: v33, a5: &a7);
LABEL_45:
      MEMORY[0x182771080]();
LABEL_46:
      MEMORY[0x182771080]();
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
