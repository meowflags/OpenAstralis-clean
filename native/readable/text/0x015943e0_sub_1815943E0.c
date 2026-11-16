// sub_15943E0
// rva 0x015943e0  size 1389  section .text  group text
// window base 0x1815943e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_15943E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  _DWORD *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  _DWORD *v29; // rbx
  __int64 v30; // rcx
  unsigned int v31; // ebp
  __int64 v32; // rdx
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  char *v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-68h] BYREF
  _DWORD *v56; // [rsp+8h] [rbp-60h]
  __int64 v57; // [rsp+10h] [rbp-58h]
  __int64 v58; // [rsp+18h] [rbp-50h]
  __int64 v59; // [rsp+20h] [rbp-48h]
  __int64 v60; // [rsp+28h] [rbp-40h]
  __int64 v61; // [rsp+30h] [rbp-38h]
  __int64 v62; // [rsp+38h] [rbp-30h]
  _DWORD *v63; // [rsp+40h] [rbp-28h]
  _DWORD *v64; // [rsp+48h] [rbp-20h]
  _DWORD *v65; // [rsp+50h] [rbp-18h]
  int v66; // [rsp+5Ch] [rbp-Ch]
  unsigned int v67; // [rsp+60h] [rbp-8h]
  unsigned int v68; // [rsp+64h] [rbp-4h]

  v65 = a5;
  if ( (unsigned __int64)&v55 <= *(_QWORD *)(v9 + 8) )
  {
    v63 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v8 )
  {
    v10 = (unsigned int)a3[4];
    if ( (_DWORD)v10 == 47076562 )
      result = &v8[2 * a3[1]];
    else
      result = &v8[2 * v10];
    v64 = result;
    if ( result == a5 )
    {
      v63 = a3;
      if ( *(int *)(v9 + 16) > 0 )
        return result;
      return (_DWORD *)sub_277F280();
    }
    if ( result == v8 )
      goto LABEL_38;
    v63 = a3;
    result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*result >> 3) + 20]))(
                         a1,
                         a2,
                         a3: result);
    if ( (_DWORD)result == 0 )
    {
      while ( 1 )
      {
LABEL_16:
        v62 = sub_5EFFD60(a1, a2, a3: v63);
        v61 = (__int64)(v8 + 88325320);
        if ( v65 == v8 )
          v60 = (__int64)(v8 + 88325320);
        else
          v60 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v65 >> 3) + 26]))(
                  a1: v12,
                  a2: v13,
                  a3: v65);
        if ( v64 == v8 )
          v14 = v61;
        else
          v14 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v64 >> 3) + 26]))(
                  a1: v12,
                  a2: v13,
                  a3: v64);
        if ( (_DWORD *)v62 == v8 )
          v15 = v61;
        else
          v15 = v62;
        if ( (_DWORD *)v60 == v8 )
          v16 = v61;
        else
          v16 = v60;
        if ( (_DWORD *)v14 == v8 )
          v17 = v61;
        else
          v17 = v14;
        v61 = v14;
        v68 = *(char *)(v17 + 12) | *(char *)(v16 + 12) | *(char *)(v15 + 12);
        v59 = v16;
        v58 = v15;
        v57 = v17;
        v18 = sub_50132E0(a1: v68, a2: v58, a3: 79, a4: v14, a5: v58);
        v22 = sub_50132E0(a1: v20, a2: v21, a3: v18, a4: v19, a5: v59);
        v26 = sub_50132E0(a1: v24, a2: v25, a3: v22, a4: v23, a5: v57);
        v29 = v8 + 93320312;
        v30 = v68;
        v31 = v26 << v68;
        if ( ((v26 << v68) & 0x80000000) != 0 )
        {
          v67 = v26;
          v51 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v51 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v66 = v26 << v68;
            v51 = sub_1EAA920(a1: v27, a2: v28, a3: 34082880);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v51 + 40;
            *(_DWORD *)v51 = 34082880;
            *(_DWORD *)(v51 + 4) = 0;
            *(_QWORD *)(v51 + 8) = 0;
            *(_QWORD *)(v51 + 16) = 0;
            *(_QWORD *)(v51 + 24) = 0;
            *(_QWORD *)(v51 + 32) = 0;
            v66 = v31;
          }
          *(_DWORD *)(v51 + 20) = 46923644;
          *(_DWORD *)(v51 + 16) = v8[93585974];
          *(_DWORD *)(v51 + 12) = (unsigned __int64)(v51 - (_QWORD)v8) >> 3;
          v56 = (_DWORD *)v51;
          sub_503B9A0(a1: v27, a2: v28, a3: v51, a4: v30, a5: 0);
          v52 = (unsigned __int64)v56;
          v56[2] = 46004603;
          if ( (*(_DWORD *)v52 & 2) != 0 )
          {
            v47 = (v52 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v47) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v52 & 0xFFFFFFFFFFF80000LL) + ((v52 - v47) >> 9) + 0x38) = 0;
            v50 = v52;
          }
          else
          {
            v50 = v52;
          }
        }
        else
        {
          v32 = *(_QWORD *)(v9 + 40);
          v33 = (v31 + 19LL) & 0x1FFFFFFF8LL;
          if ( v33 >= 0x20000 || (v53 = v32 + v33) > *(_QWORD *)(v9 + 32) )
          {
            v56 = v8 + 93320312;
            v67 = v26;
            v32 = sub_1EAA840(a1: 34082368, a2: v28, a3: 34082368, a4: v68, a5: v31);
            v29 = v56;
            v26 = v67;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v53;
            *(_QWORD *)v32 = 34082368;
            *(_DWORD *)(v32 + 8) = v31;
          }
          v56 = (_DWORD *)v32;
          v67 = v26;
          if ( v68 != 0 )
            sub_4FF2C40(a1: 1, a2: v28, a3: v29, a4: v32, a5: v32, a6: v26);
          else
            sub_1EB4960(a1: v26, a2: 0, a3: v8 + 94087886, a4: v30, a5: 0, a6: v56);
          v35 = sub_5011A80(a1: v57, a2: v8 + 14417240, a3: v67, a4: v34, a5: v68, a6: v56);
          v37 = sub_5011A80(a1: v59, a2: v8 + 14417246, a3: v35, a4: v36, a5: v68, a6: v56);
          v39 = sub_5011A80(a1: v58, a2: v8 + 14417252, a3: v37, a4: v38, a5: v68, a6: v56);
          v42 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v42 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v66 = v39;
            v42 = sub_1EAA920(a1: v40, a2: v41, a3: 34081944);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v42 + 40;
            *(_DWORD *)v42 = 34081944;
            *(_DWORD *)(v42 + 4) = 0;
            *(_QWORD *)(v42 + 8) = 0;
            *(_QWORD *)(v42 + 16) = 0;
            *(_QWORD *)(v42 + 24) = 0;
            *(_QWORD *)(v42 + 32) = 0;
          }
          v61 = v42;
          *(_DWORD *)(v42 + 20) = 46923644;
          *(_DWORD *)(v42 + 16) = v8[93585974];
          *(_DWORD *)(v42 + 12) = (unsigned __int64)(v42 - (_QWORD)v8) >> 3;
          v66 = (char)v68;
          v43 = sub_503B9A0(a1: v40, a2: v41, a3: v42, a4: v42, a5: 0);
          v46 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v46 + 24) > *(_QWORD *)(v9 + 32) )
          {
            v59 = v43;
            v46 = sub_1EAA920(a1: v44, a2: v45, a3: 34082680);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v46 + 24;
            *(_DWORD *)v46 = 34082680;
            *(_DWORD *)(v46 + 4) = 0;
            *(_QWORD *)(v46 + 8) = 0;
            *(_QWORD *)(v46 + 16) = 0;
          }
          v47 = v61;
          v48 = (char *)v56;
          v49 = v68;
          *(_BYTE *)(v46 + 12) = v68;
          *(_DWORD *)(v46 + 4) = (unsigned __int64)(v48 - (char *)v8) >> 3;
          *(_DWORD *)(v47 + 8) = (unsigned __int64)(v46 - (_QWORD)v8) >> 3;
          if ( (*(_DWORD *)v47 & 2) != 0 )
          {
            v54 = (v47 & 0xFFFFFFFFFFF80000LL) + 2112;
            if ( *(_BYTE *)((v47 & 0xFFFFFFFFFFF80000LL) + ((v47 - v54) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v47 & 0xFFFFFFFFFFF80000LL) + ((v47 - v54) >> 9) + 0x38) = 0;
            v50 = v47;
          }
          else
          {
            v50 = v47;
          }
        }
        sub_2769900(a1: v49, a2: v45, a3: v50, a4: v47, a5: &a7);
LABEL_38:
        v63 = a3;
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_16;
}
