// sub_5036F80
// rva 0x05036f80  size 1312  section .text  group text
// window base 0x185036f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5036F80(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, signed __int64 a5)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned int *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned __int64 i; // rax
  __int64 result; // rax
  __int64 (__fastcall *v17)(__int64, unsigned __int64, unsigned int *); // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64, _QWORD, unsigned int *); // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r9
  unsigned int v27; // r11d
  __int64 v28; // rbp
  BOOL v29; // ebp
  int v30; // ebp
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rbx
  __int64 v33; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]
  unsigned int v37; // [rsp+24h] [rbp-34h]
  unsigned int *v38; // [rsp+28h] [rbp-30h]
  unsigned int *v39; // [rsp+30h] [rbp-28h]
  unsigned int *v40; // [rsp+38h] [rbp-20h]
  unsigned int *v41; // [rsp+40h] [rbp-18h]
  int v42; // [rsp+4Ch] [rbp-Ch]
  unsigned int v43; // [rsp+50h] [rbp-8h]
  unsigned int v44; // [rsp+54h] [rbp-4h]

  v41 = (unsigned int *)a3;
  v40 = (unsigned int *)a5;
  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_61;
  }
  *(_DWORD *)(a3 + 8) = 0;
  if ( (unsigned int *)a5 == v7 )
  {
LABEL_61:
    sub_2771080();
    goto LABEL_62;
  }
  v9 = *(unsigned int *)(a5 + 4);
  v10 = &v7[2 * v9];
  v39 = v10;
  if ( (_DWORD)v9 == 0 )
  {
LABEL_62:
    sub_2771080();
LABEL_63:
    v42 = v5;
    sub_2771220(a1: v14, a2: v13, a3: (unsigned int)v5, a4: v10, a5: v44);
LABEL_64:
    sub_2771220(a1: v14, a2: v25, a3: (unsigned int)v14, a4: v24, a5: (unsigned int)v5, a6: v26);
LABEL_65:
    sub_2771080(a1: v14);
    return sub_50374A0();
  }
  v11 = v7[2 * v9 + 2];
  v44 = v11;
  *(_DWORD *)(a3 + 12) = (int)(2 * v11) / 3;
  v12 = *(_QWORD *)(v8 + 40);
  v13 = (4LL * v11 + 19) & 0x7FFFFFFF8LL;
  v14 = 43307208;
  if ( v13 >= 0x20000 || v12 + v13 > *(_QWORD *)(v8 + 32) )
  {
LABEL_57:
    v12 = sub_1EAA840(a1: v14, a2: v13, a3: v14, a4: v10, a5: v44);
    v11 = v44;
    v10 = v39;
    a5 = (signed __int64)v40;
    a3 = (unsigned __int64)v41;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v12 + v13;
    *(_QWORD *)v12 = 43307208;
    *(_DWORD *)(v12 + 8) = v11;
    *(_DWORD *)(v12 + 12) = 0;
    if ( v13 - 16 >= 0x800 )
    {
      memset((void *)(v12 + 16), 0, v13 - 16);
      v14 = v12 + v13;
      v10 = v39;
    }
    else
    {
      for ( i = 16; v13 > i; i += 8LL )
        *(_QWORD *)(v12 + i) = 0;
    }
  }
  *(_DWORD *)(a3 + 4) = (unsigned __int64)(v12 - (_QWORD)v7) >> 3;
  result = *(unsigned int *)a3;
  if ( (result & 2) != 0 )
  {
LABEL_54:
    v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    result = (a3 - v13) >> 9;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
  }
  v5 = 0;
  while ( (int)v11 > (int)v5 )
  {
    if ( v11 <= (unsigned int)v5 )
      goto LABEL_63;
    v13 = v10[v5 + 3];
    v14 = (unsigned int)(v5 + 1);
    if ( (_DWORD)v13 != 0 )
    {
      v43 = v5 + 1;
      v42 = v5;
      v17 = (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned int *))(v6
                                                                              + *(_QWORD *)&v7[2 * (v7[2 * v13] >> 3)
                                                                                             + 38]);
      v38 = &v7[2 * v13];
      v37 = v13;
      result = v17(a1: v14, a2: v13, a3: v38);
      v36 = result;
      if ( (unsigned int *)result != v7 )
      {
        v19 = *(_DWORD *)result >> 3;
        if ( SHIWORD(v7[2 * v19 + 15]) < 2 || (a3 = v7[2 * v19 + 4], v7[2 * a3 + 4] != 4075) )
        {
          sub_276FC00(a1: v14, a2: v13, a3: v36, a4: v18, a5: v7 + 8528392);
          goto LABEL_54;
        }
      }
      if ( (unsigned int *)result == v7 )
      {
        v5 = v43;
        v11 = v44;
        v10 = v39;
      }
      else
      {
        v20 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, unsigned int *))(v6
                                                                                       + *(_QWORD *)&v7[2 * (*(_DWORD *)result >> 3) + 28]);
        v35 = v20(a1: v14, a2: v37, a3: result, a4: v20, a5: &v7[2 * v7[2 * v37 + 5]]);
        v23 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v23 + 32) > *(_QWORD *)(v8 + 32) )
        {
          v23 = sub_1EAA920(a1: v21, a2: v22, a3: 43307320);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v23 + 32;
          *(_DWORD *)v23 = 43307320;
          *(_DWORD *)(v23 + 4) = 0;
          *(_QWORD *)(v23 + 8) = 0;
          *(_QWORD *)(v23 + 16) = 0;
          *(_QWORD *)(v23 + 24) = 0;
        }
        v34 = (_DWORD *)v23;
        sub_53F1120(a1: v21, a2: v22, a3: v23, a4: v23, a5: v36, a6: v7);
        v24 = (unsigned __int64)v34;
        v34[5] = (unsigned __int64)(v35 - (_QWORD)v7) >> 3;
        if ( (*(_DWORD *)v24 & 2) != 0 )
        {
          v31 = (v24 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v31) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v24 & 0xFFFFFFFFFFF80000LL) + ((v24 - v31) >> 9) + 0x38) = 0;
        }
        a3 = (unsigned __int64)v41;
        v25 = v41[1];
        v14 = *(_DWORD *)(v36 + 4) & (v44 - 1);
        if ( (_DWORD)v25 == 0 )
          goto LABEL_65;
        LODWORD(v5) = v7[2 * v25 + 2];
        a5 = (signed __int64)&v7[2 * v25];
        v26 = v44;
        while ( 1 )
        {
          if ( (unsigned int)v5 <= (unsigned int)v14 )
            goto LABEL_64;
          if ( *(_DWORD *)(a5 + 4 * v14 + 12) == 0 )
            break;
          if ( (int)v26 <= (int)v14 + 1 )
            JUMPOUT(0x30A052229LL);
          v27 = v14 + 1;
          if ( *(int *)(v8 + 16) <= 0 )
            sub_277F280();
          v14 = v27;
        }
        v28 = v7[2 * (v7[2 * v25] >> 3) + 6];
        v13 = (unsigned int)SLOWORD(v7[2 * v28 + 15]);
        if ( SLOWORD(v7[2 * v28 + 15]) < 0 )
        {
          v30 = v7[2 * v28 + 10];
          if ( v30 >= 0x10000 )
          {
LABEL_56:
            sub_276F520(a1: v14, a2: v13, a3: v24);
            goto LABEL_57;
          }
          v29 = v30 == 0;
        }
        else
        {
          if ( SLOWORD(v7[2 * v28 + 15]) >= 4 )
            goto LABEL_56;
          v13 = v7[LOWORD(v7[2 * v28 + 15]) + 15066969];
          v29 = v7[2 * v28 + 9] == v13;
        }
        if ( !v29 )
          goto LABEL_56;
        *(_DWORD *)(a5 + 4 * v14 + 12) = (v24 - (unsigned __int64)v7) >> 3;
        result = *(unsigned int *)a5;
        if ( (result & 2) != 0 )
        {
          if ( (result & 1) != 0 )
          {
            result = a5 - *(_QWORD *)(a5 - 8);
            v32 = (unsigned __int64)(4 * v14 + 12) >> 9;
            if ( *(_BYTE *)(result + v32 + 48) != 0 )
              *(_BYTE *)(result + v32 + 48) = 0;
          }
          else
          {
            result = a5 & 0xFFFFFFFFFFF80000LL;
            if ( *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
              *(_BYTE *)((a5 & 0xFFFFFFFFFFF80000LL) + ((a5 - ((a5 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
          }
        }
        ++*(_DWORD *)(a3 + 8);
        v5 = v43;
        v11 = v26;
        v10 = v39;
      }
    }
    else
    {
      v43 = v5 + 1;
      v42 = v5;
      if ( *(int *)(v8 + 16) <= 0 )
      {
        result = sub_277F280();
        v5 = (unsigned int)v14;
      }
      else
      {
        v5 = v43;
      }
      v10 = v39;
    }
  }
  v42 = v5;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v14, a2: v13, a3, a4: v10, a5);
  return result;
}
