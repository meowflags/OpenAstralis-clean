// sub_1E8AB60
// rva 0x01e8ab60  size 1789  section .text  group text
// window base 0x181e8ab60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8AB60(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  double v23; // xmm0_8
  __int64 *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  double v27; // xmm0_8
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  double v31; // xmm0_8
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 *v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rsi
  double v38; // xmm0_8
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  int v44; // ecx
  int v45; // esi
  unsigned int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 *v49; // rdx
  double v50; // xmm0_8
  double v51; // xmm0_8
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 *v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 *v67; // rdx
  double v68; // xmm0_8
  __int64 result; // rax
  __int64 v70; // rax
  int v71; // [rsp+0h] [rbp-78h] BYREF
  __int64 v72; // [rsp+20h] [rbp-58h]
  __int64 v73; // [rsp+28h] [rbp-50h]
  __int64 v74; // [rsp+30h] [rbp-48h]
  __int64 v75; // [rsp+38h] [rbp-40h]
  _BYTE v76[12]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v77; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v78; // [rsp+50h] [rbp-28h]
  __int64 *v79; // [rsp+58h] [rbp-20h]
  void (__fastcall *v80)(__int64, __int64 *, __int64, __int64 *, double); // [rsp+60h] [rbp-18h]
  void (__fastcall *v81)(__int64, __int64, _BYTE *, _BYTE *); // [rsp+68h] [rbp-10h]
  __int64 v82; // [rsp+70h] [rbp-8h]

  v82 = a5;
  if ( (unsigned __int64)&v71 <= *(_QWORD *)(v20 + 8) )
  {
    v31 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v71);
    goto LABEL_29;
  }
  v21 = *(_QWORD *)(a5 + 40);
  v22 = *(_QWORD *)(a5 + 32);
  v23 = MEMORY[0x11b128d8]/* 0x11b128d8 */;
  if ( v22 == *(_QWORD *)(v19 + 376654976) )
    return sub_181E8AF30(a1, a2, a3: v21, a4: v22, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
  v79 = *(__int64 **)(a5 + 40);
  v24 = (__int64 *)v76;
  v78 = (__int64 *)v76;
  if ( *(double *)(v19 + 376178920) == 0.0 )
  {
    v80 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64 *, double))MEMORY[0x11703170]/* 0x11703170 */;
    v81 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703c40]/* 0x11703c40 */;
    MEMORY[0x11703c40]/* 0x11703c40 */(a1, a2: v76, a3: v21, a4: v76, a5: MEMORY[0x11b128d8]/* 0x11b128d8 */, a6: 0.0, a7: 0.0);
    v24 = v78;
    v23 = (double)*v78;
    *(double *)(v19 + 376178920) = MEMORY[0x11b128d8]/* 0x11b128d8 */ / v23;
  }
  else
  {
    v81 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))MEMORY[0x11703c40]/* 0x11703c40 */;
    v80 = (void (__fastcall *)(__int64, __int64 *, __int64, __int64 *, double))MEMORY[0x11703170]/* 0x11703170 */;
  }
  v80(a1, a2: v24, a3: v21, a4: v24, a5: v23);
  v26 = (__int64)v78;
  v27 = (double)*v78 * *(double *)(v19 + 376178920);
  v28 = (__int64)v27;
  if ( (__int64)v27 == MEMORY[0x11b128e0]/* 0x11b128e0 */ )
    goto LABEL_30;
  while ( 1 )
  {
    if ( *(_BYTE *)(v19 + 376655416) == 0 )
    {
      if ( *(_BYTE *)(v19 + 376242781) != 0 )
        v70 = *(_QWORD *)(v19 + 376181320);
      else
        v70 = v28;
      *(_QWORD *)(v19 + 376655392) = v70;
      *(_BYTE *)(v19 + 376655416) = 1;
      *(_QWORD *)(v19 + 376655400) = 0;
    }
    *(_QWORD *)(v19 + 376655400) = v28;
    *(_QWORD *)(v19 + 376655408) += v28 - *(_QWORD *)(v19 + 376655392);
    v78 = (__int64 *)v28;
    sub_1EA25C0(a1: v25, a2: v26, a3: v19 + 376655136);
    *(_BYTE *)(v19 + 376654992) = 0;
    v32 = *(unsigned int *)(v82 + 48);
    if ( (unsigned int)v32 < 0xB )
      break;
LABEL_29:
    v27 = sub_276F0E0(a1: v29, a2: v30, a3: v78, a4: v31);
LABEL_30:
    if ( __builtin_isnan(v27) )
    {
      v28 = 0;
    }
    else if ( v27 > 0.0 )
    {
      v28 = ~v28;
    }
  }
  v75 = v19 + 376654936;
  v74 = v19 + 8LL * *(unsigned int *)(v19 + 4 * v32 + 376655660);
  sub_1E8D740(a1: v29, a2: v30, a3: v19 + 376654936, a4: v19 + 376654936, a5: v74);
  v35 = (__int64 *)v76;
  v79 = (__int64 *)v76;
  if ( *(double *)(v19 + 376178920) == 0.0 )
  {
    v81(a1: v33, a2: v34, a3: v76, a4: v76);
    v35 = v79;
    *(double *)(v19 + 376178920) = MEMORY[0x11b128d8]/* 0x11b128d8 */ / (double)*v79;
  }
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))v80)(a1: v33, a2: v34, a3: v35, a4: v35);
  v38 = (double)*v79 * *(double *)(v19 + 376178920);
  v39 = (__int64)v38;
  if ( (__int64)v38 == MEMORY[0x11b128e0]/* 0x11b128e0 */ )
  {
    if ( __builtin_isnan(v38) )
    {
      v39 = 0;
    }
    else if ( v38 > 0.0 )
    {
      v39 = ~v39;
    }
  }
  *(_QWORD *)(v19 + 376655712) = v39;
  *(_BYTE *)(v19 + 376655736) = 1;
  *(_QWORD *)(v19 + 376655720) = 0;
  v73 = v19 + 376652784;
  sub_1EA6C40(a1: v36, a2: v37, a3: v19 + 376652784);
  v72 = v19 + 376655752;
  sub_1E91720(a1: v40, a2: v41, a3: v19 + 376655752);
  sub_1E98360(a1: v42, a2: v43, a3: v19 + 376652592);
  v46 = sub_1E8AA00(a1: *(_BYTE *)(v82 + 52) != 0, a2: v45, a3: v75, a4: v44, a5: v74, a6: (__int64)v78);
  *(_BYTE *)(v82 + 53) = v46;
  v49 = (__int64 *)v76;
  v79 = (__int64 *)v76;
  v50 = *(double *)(v19 + 376178920);
  v77 = v46;
  if ( v50 == 0.0 )
  {
    v81(a1: v47, a2: v48, a3: v76, a4: v76);
    v49 = v79;
    *(double *)(v19 + 376178920) = MEMORY[0x11b128d8]/* 0x11b128d8 */ / (double)*v79;
  }
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))v80)(a1: v47, a2: v48, a3: v49, a4: v49);
  v51 = (double)*v79 * *(double *)(v19 + 376178920);
  v52 = (__int64)v51;
  if ( (__int64)v51 == MEMORY[0x11b128e0]/* 0x11b128e0 */ )
  {
    if ( __builtin_isnan(v51) )
    {
      v52 = 0;
    }
    else if ( v51 > 0.0 )
    {
      v52 = ~v52;
    }
  }
  *(_QWORD *)(v19 + 376655720) = v52;
  *(_QWORD *)(v19 + 376655728) += v52 - *(_QWORD *)(v19 + 376655712);
  sub_1E8E1E0();
  v55 = *(_QWORD *)(v19 + 376655728);
  if ( *(_BYTE *)(v19 + 376654992) != 0 )
  {
    ++*(_QWORD *)(v19 + 376652720);
    *(_QWORD *)(v19 + 376652728) += v55;
  }
  else
  {
    ++*(_QWORD *)(v19 + 376652704);
    *(_QWORD *)(v19 + 376652712) += v55;
  }
  v79 = (__int64 *)(*(_QWORD *)(v19 + 376652752) + (*(_QWORD *)(v19 + 376652760) << 19));
  v56 = sub_1EA5F20(a1: v53, a2: v54, a3: v73);
  *(_QWORD *)(v19 + 376655776) = (char *)v79 + v56;
  __faststorefence();
  *(_QWORD *)(v19 + 376652832) = *(_QWORD *)(v19 + 376652752) + (*(_QWORD *)(v19 + 376652760) << 19);
  __faststorefence();
  sub_1E91640(a1: v57, a2: v58, a3: v72);
  sub_1E8D2C0(a1: v60, a2: v61, a3: v75, a4: v59, a5: v74);
  ++*(_QWORD *)(v19 + 376654976);
  v64 = (__int64 *)v76;
  v79 = (__int64 *)v76;
  if ( *(double *)(v19 + 376178920) == 0.0 )
  {
    v81(a1: v62, a2: v63, a3: v76, a4: v76);
    v64 = v79;
    *(double *)(v19 + 376178920) = MEMORY[0x11b128d8]/* 0x11b128d8 */ / (double)*v79;
  }
  ((void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))v80)(a1: v62, a2: v63, a3: v64, a4: v64);
  v67 = v79;
  v68 = (double)*v79 * *(double *)(v19 + 376178920);
  result = (__int64)v68;
  if ( (__int64)v68 == MEMORY[0x11b128e0]/* 0x11b128e0 */ )
  {
    if ( __builtin_isnan(v68) )
    {
      result = 0;
    }
    else if ( v68 > 0.0 )
    {
      result = ~result;
    }
  }
  *(_QWORD *)(v19 + 376655392) = result;
  *(_BYTE *)(v19 + 376655416) = 1;
  *(_QWORD *)(v19 + 376655400) = 0;
  if ( *(int *)(v20 + 16) <= 0 )
    return sub_277F280(a1: v65, a2: v66, a3: v67, a4: v77);
  return result;
}
