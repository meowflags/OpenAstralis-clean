// sub_27885C0
// rva 0x027885c0  size 2868  section .text  group text
// window base 0x1827885c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27885C0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rdx
  int v35; // ebx
  unsigned int v36; // ebp
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r9
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 result; // rax
  unsigned __int64 v60; // rbx
  unsigned __int64 v61; // rbx
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // r9
  __m128 v67; // xmm0
  __m128 v68; // xmm1
  __m128 v69; // xmm2
  __m128 v70; // xmm3
  __m128 v71; // xmm4
  __m128 v72; // xmm5
  __m128 v73; // xmm6
  __m128 v74; // xmm7
  unsigned __int64 v75; // rdx
  _DWORD *v76; // rax
  double v77; // xmm0_8
  _DWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdi
  __int64 v81; // rsi
  unsigned __int64 v82; // rbx
  __int64 v83; // [rsp+0h] [rbp-3A8h] BYREF
  _DWORD *v84; // [rsp+28h] [rbp-380h]
  _DWORD *v85; // [rsp+30h] [rbp-378h]
  unsigned __int64 v86; // [rsp+38h] [rbp-370h]
  _BYTE v87[16]; // [rsp+40h] [rbp-368h] BYREF
  _BYTE v88[16]; // [rsp+50h] [rbp-358h] BYREF
  __int64 v89[66]; // [rsp+60h] [rbp-348h] BYREF
  _DWORD v90[40]; // [rsp+270h] [rbp-138h] BYREF
  unsigned int v91; // [rsp+310h] [rbp-98h]
  int v92; // [rsp+314h] [rbp-94h]
  __int64 v93; // [rsp+318h] [rbp-90h]
  int v94; // [rsp+324h] [rbp-84h]
  _BYTE *v95; // [rsp+328h] [rbp-80h]
  _BYTE *v96; // [rsp+330h] [rbp-78h]
  __int64 v97; // [rsp+338h] [rbp-70h]
  __int64 v98; // [rsp+340h] [rbp-68h]
  unsigned __int64 v99; // [rsp+348h] [rbp-60h]
  unsigned int v100; // [rsp+354h] [rbp-54h]
  int v101; // [rsp+358h] [rbp-50h]
  int v102; // [rsp+35Ch] [rbp-4Ch]
  int v103; // [rsp+360h] [rbp-48h]
  int v104; // [rsp+364h] [rbp-44h]
  __int64 v105; // [rsp+368h] [rbp-40h]
  __int64 *v106; // [rsp+370h] [rbp-38h]
  int v107; // [rsp+37Ch] [rbp-2Ch]
  BOOL v108; // [rsp+380h] [rbp-28h]
  int v109; // [rsp+384h] [rbp-24h]
  unsigned int v110; // [rsp+388h] [rbp-20h]
  unsigned int v111; // [rsp+38Ch] [rbp-1Ch]
  int v112; // [rsp+390h] [rbp-18h]
  int v113; // [rsp+394h] [rbp-14h]
  char *v114; // [rsp+398h] [rbp-10h]
  __int64 v115; // [rsp+3A0h] [rbp-8h]

  v86 = a3;
  if ( (unsigned __int64)&v83 <= *(_QWORD *)(v9 + 8) )
  {
    v42 = sub_1EB84E0();
    goto LABEL_101;
  }
  v114 = (char *)v90;
  v90[0] = 156;
  sub_278AE40(a1, a2, a3: v90);
  v113 = sub_4FFC820(a1: v11, a2: v12, a3: v8 + 365179232, a4: v10, a5: v8 + 372450184, a6: 3);
  v13 = v114[154];
  v112 = *((_DWORD *)v114 + 4);
  v111 = *((_DWORD *)v114 + 1);
  v110 = *((_DWORD *)v114 + 2);
  v109 = *((_DWORD *)v114 + 3);
  v108 = (_BYTE)v13 == 1;
  v107 = v13;
  v106 = v89;
  v105 = sub_15A85E0(a1: v110, a2: v111, a3: v8 + 376669672, a4: v114, a5: 0);
  v104 = 259 - sub_278B180(a1: v14, a2: v15, a3: v105);
  v18 = sub_278AE20(a1: v16, a2: v17, a3: v106);
  if ( v18 != 0 )
  {
    if ( v18 > v104 )
    {
      v115 = v7;
      v103 = v109;
      v102 = v110;
      v37 = v111;
      v101 = v18;
    }
    else
    {
      v101 = v18;
      sub_278B1A0(a1: v20, a2: v21, a3: v106, a4: v19, a5: v105, a6: (unsigned int)(260 - v18));
      v25 = sub_278AFC0(a1: v23, a2: v24, a3: v106, a4: v22, a5: 0);
      v100 = v25;
      if ( v25 != 0 )
      {
        v99 = v25;
        v98 = v25;
        v27 = sub_278B120(a1: v20, a2: v26, a3: v25);
        v98 = v27;
        if ( v27 != 0 )
        {
          v99 = (unsigned __int64)MEMORY[0x10e45030]/* 0x10e45030 */;
          if ( (unsigned int)sub_278B000(a1: v27, a2: v28, a3: v106, a4: MEMORY[0x10e45030]/* 0x10e45030 */, a5: 0, a6: v100) != 0
            && (v97 = sub_15A85E0(a1: v31, a2: v32, a3: v8 + 376669712, a4: v30, a5: 0),
                v96 = v87,
                v95 = v88,
                (unsigned int)sub_278B040(a1: v88, a2: v33, a3: v98, a4: v87, a5: v97, a6: v87) != 0) )
          {
            v34 = *(_QWORD *)v96;
            v35 = *(int *)(*(_QWORD *)v96 + 16LL) >> 16;
            v36 = (__int16)*(_DWORD *)(*(_QWORD *)v96 + 16LL);
            v94 = *(int *)(*(_QWORD *)v96 + 20LL) >> 16;
            v93 = v34;
            v92 = v35;
            v91 = v36;
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))v99)(a1: v31, a2: v32, a3: v34, a4: v98);
            v115 = v7;
            v103 = v94;
            v102 = v91;
            v37 = (unsigned int)v92;
          }
          else
          {
            ((void (__fastcall *)(__int64, __int64, __int64, __int64))v99)(a1: v31, a2: v32, a3: v29, a4: v98);
            v115 = v7;
            v103 = v109;
            v102 = v110;
            v37 = v111;
          }
        }
        else
        {
          v115 = v7;
          v103 = v109;
          v102 = v110;
          v37 = v111;
        }
      }
      else
      {
        v115 = v7;
        v103 = v109;
        v102 = v110;
        v37 = v111;
      }
    }
  }
  else
  {
    v115 = v7;
    v103 = v109;
    v102 = v110;
    v37 = v111;
    v101 = 0;
  }
  v92 = v37;
  v38 = sub_50130C0(a1: v20, a2: v37, a3: 1, a4: v19, a5: (unsigned int)v37);
  v42 = sub_50130C0(a1: v40, a2: v41, a3: v38, a4: v39, a5: (unsigned int)v102);
  v45 = v8 + 373281248;
  if ( (v42 & 0x80000000) != 0 )
  {
LABEL_101:
    v91 = v42;
    v62 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v62 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v62 = sub_1EAA920(a1: v43, a2: v44, a3: 34082880, a4: v45);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v62 + 40;
      *(_DWORD *)v62 = 34082880;
      *(_DWORD *)(v62 + 4) = 0;
      *(_QWORD *)(v62 + 8) = 0;
      *(_QWORD *)(v62 + 16) = 0;
      *(_QWORD *)(v62 + 24) = 0;
      *(_QWORD *)(v62 + 32) = 0;
    }
    *(_DWORD *)(v62 + 20) = 46923644;
    *(_DWORD *)(v62 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v62 + 12) = (unsigned __int64)(v62 - v8) >> 3;
    v85 = (_DWORD *)v62;
    sub_503B9A0(a1: v43, a2: v44, a3: v62, a4: v62, a5: 0);
    v75 = (unsigned __int64)v85;
    v85[2] = 46004603;
    if ( (*(_DWORD *)v75 & 2) != 0 )
    {
      v63 = v75 & 0xFFFFFFFFFFF80000LL;
      v82 = (v75 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v75 & 0xFFFFFFFFFFF80000LL) + ((v75 - v82) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v75 & 0xFFFFFFFFFFF80000LL) + ((v75 - v82) >> 9) + 0x38) = 0;
      v76 = (_DWORD *)v75;
    }
    else
    {
      v76 = (_DWORD *)v75;
    }
    while ( 1 )
    {
      *(_QWORD *)&v77 = sub_2769900(
                          a1: v64,
                          a2: v65,
                          a3: v76,
                          a4: v63,
                          a5: (__int64)&a7,
                          a6: v66,
                          a7: v67,
                          a8: v68,
                          a9: v69,
                          a10: v70,
                          a11: v71,
                          a12: v72,
                          a13: v73,
                          a14: v74).m128i_u64[0];
      v84 = v78;
      ((void (__fastcall *)(__int64, __int64, __int64, __int64, double))v99)(
        a1: v80,
        a2: v81,
        a3: v79,
        a4: v98,
        a5: v77);
      v76 = v84;
    }
  }
  v46 = *(_QWORD *)(v9 + 40);
  v47 = (v42 + 19LL) & 0x1FFFFFFF8LL;
  if ( v47 >= 0x20000 || (v48 = v46 + v47) > *(_QWORD *)(v9 + 32) )
  {
    v85 = (_DWORD *)(v8 + 373281248);
    v91 = v42;
    v46 = sub_1EAA840(a1: 34082368, a2: v44, a3: 34082368, a4: v45, a5: v42);
    v42 = v91;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v48;
    *(_QWORD *)v46 = 34082368;
    *(_DWORD *)(v46 + 8) = v42;
    v85 = (_DWORD *)(v8 + 373281248);
  }
  v84 = (_DWORD *)v46;
  v91 = v42;
  sub_1EB4960(a1: v42, a2: 0, a3: v8 + 376351544, a4: v45, a5: 0, a6: v46);
  v50 = sub_5011920(a1: (unsigned int)v102, a2: v8 + 58185048, a3: v91, a4: v49, a5: 0, a6: v84);
  v52 = sub_5011920(a1: (unsigned int)v92, a2: v85, a3: v50, a4: v51, a5: 0, a6: v84);
  v55 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v55 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v94 = v52;
    v56 = sub_1EAA920(a1: 34082680, a2: v54, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v55 + 24;
    *(_DWORD *)v55 = 34082680;
    *(_DWORD *)(v55 + 4) = 0;
    *(_QWORD *)(v55 + 8) = 0;
    *(_QWORD *)(v55 + 16) = 0;
    v56 = v55;
  }
  v57 = v86;
  *(_DWORD *)(v56 + 4) = ((unsigned __int64)v84 - v8) >> 3;
  *(_DWORD *)(v57 + 24) = (unsigned __int64)(v56 - v8) >> 3;
  if ( (*(_DWORD *)v57 & 2) != 0 )
  {
    v60 = (v57 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v60) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v60) >> 9) + 0x38) = 0;
  }
  if ( v112 == 1 )
  {
    if ( v92 == 4 )
    {
      if ( v102 != 0 )
      {
        if ( v102 == 10 )
        {
          v58 = v8 + 366002264;
          result = v57;
        }
        else
        {
          if ( v102 == 90 )
            v58 = v8 + 366002000;
          else
            v58 = v8 + 366002208;
          result = v57;
        }
      }
      else
      {
        v58 = v8 + 366002312;
        result = v57;
      }
    }
    else
    {
      v58 = v8 + 366002208;
      result = v57;
    }
  }
  else if ( v112 == 2 )
  {
    if ( v92 < 5 )
    {
      v58 = v8 + 366001952;
      result = v57;
    }
    else
    {
      switch ( v92 )
      {
        case 5:
          if ( v102 != 0 )
          {
            if ( v102 == 1 )
            {
              v58 = v8 + 366001384;
              result = v57;
            }
            else if ( v102 == 2 )
            {
              if ( (_BYTE)v107 == 1 )
              {
                if ( v113 != 0 )
                {
                  v58 = v8 + 366001384;
                  result = v57;
                }
                else
                {
                  v58 = v8 + 366002504;
                  result = v86;
                }
              }
              else
              {
                v58 = v8 + 366002504;
                result = v57;
              }
            }
            else
            {
              v58 = v8 + 366001896;
              result = v57;
            }
          }
          else
          {
            v58 = v8 + 366002552;
            result = v57;
          }
          break;
        case 6:
          if ( (_BYTE)v107 == 1 )
          {
            if ( v102 >= 2 )
            {
              if ( v102 == 2 )
              {
                v58 = v8 + 366002408;
                result = v86;
                break;
              }
              if ( v102 == 3 )
              {
                v58 = v8 + 366002360;
                result = v86;
                break;
              }
            }
            else
            {
              if ( v102 == 0 )
              {
                v58 = v8 + 366001432;
                result = v86;
                break;
              }
              if ( v102 == 1 )
              {
                v58 = v8 + 366002456;
                result = v86;
                break;
              }
            }
            v58 = v8 + 366001896;
            result = v57;
          }
          else
          {
            if ( v102 >= 2 )
            {
              if ( v102 == 2 )
              {
                v58 = v8 + 366001720;
                result = v86;
                break;
              }
              if ( v102 == 3 )
              {
                v58 = v8 + 366001656;
                result = v86;
                break;
              }
            }
            else
            {
              if ( v102 == 0 )
              {
                v58 = v8 + 366001840;
                result = v86;
                break;
              }
              if ( v102 == 1 )
              {
                v58 = v8 + 366001776;
                result = v86;
                break;
              }
            }
            v58 = v8 + 366001896;
            result = v57;
          }
          break;
        case 10:
          if ( (_BYTE)v107 == 1 )
          {
            if ( v102 != 0 )
            {
              v58 = v8 + 366001896;
              result = v57;
            }
            else
            {
              if ( v103 < 22000 )
                v58 = v8 + 366002648;
              else
                v58 = v8 + 366002600;
              result = v86;
            }
          }
          else if ( v102 != 0 )
          {
            v58 = v8 + 366001896;
            result = v57;
          }
          else if ( v103 < 20348 )
          {
            if ( v103 < 17763 )
              v58 = v8 + 366001600;
            else
              v58 = v8 + 366001544;
            result = v86;
          }
          else
          {
            v58 = v8 + 366001488;
            result = v86;
          }
          break;
        default:
          v58 = v8 + 366001896;
          result = v57;
          break;
      }
    }
  }
  else
  {
    v58 = v8 + 366002696;
    result = v57;
  }
  *(_DWORD *)(result + 20) = (unsigned __int64)(v58 - v8) >> 3;
  if ( (*(_DWORD *)result & 2) != 0 )
  {
    v57 = result & 0xFFFFFFFFFFF80000LL;
    v61 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v61) >> 9) + 0x38) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v61) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v53, a2: v54, a3: v58, a4: v57);
  return result;
}
