// sub_1EB6E20
// rva 0x01eb6e20  size 2545  section .text  group text
// window base 0x181eb6e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB6E20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        int a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        __int64 a28,
        int a29)
{
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v47; // rdx
  BOOL v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  _DWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rsi
  int v63; // r8d
  int v64; // r9d
  _BOOL8 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdx
  int v68; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+58h] [rbp-90h]
  _DWORD v70[22]; // [rsp+60h] [rbp-88h] BYREF
  unsigned int v71; // [rsp+B8h] [rbp-30h]
  BOOL v72; // [rsp+BCh] [rbp-2Ch]
  _QWORD *v73; // [rsp+C0h] [rbp-28h]
  __int64 v74; // [rsp+C8h] [rbp-20h]
  BOOL v75; // [rsp+D4h] [rbp-14h]
  __int64 v76; // [rsp+D8h] [rbp-10h]
  __int64 v77; // [rsp+E0h] [rbp-8h]

  v77 = a3;
  if ( (unsigned __int64)&v68 <= *(_QWORD *)(v30 + 8) )
  {
    v60 = (_DWORD *)sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v68);
    v65 = v72;
    v66 = *v60 >> 3;
    if ( *(__int16 *)(v29 + 8 * v66 + 62) < 5
      || *(_DWORD *)(v29 + 8LL * *(unsigned int *)(v29 + 8 * v66 + 16) + 28) != 88014 )
    {
      do
      {
        do
        {
          v60 = (_DWORD *)sub_2769900(a1: v61, a2: v62, a3: v60, a4: v65, a5: &a7);
          v65 = v72;
          v67 = *v60 >> 3;
        }
        while ( *(__int16 *)(v29 + 8 * v67 + 62) < 5 );
      }
      while ( *(_DWORD *)(v29 + 8LL * *(unsigned int *)(v29 + 8 * v67 + 16) + 28) != 88014 );
    }
    return sub_181EB7377(
             a1: v61,
             a2: v62,
             a3: (_DWORD)v60,
             a4: v65,
             a5: v63,
             a6: v64,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27,
             a28,
             a29);
  }
  else
  {
    v76 = 292565976;
    v75 = __sync_val_compare_and_swap((volatile signed __int32 *)0x117033D8, 0, 1) == 0;
    sub_1594EA0(a1, a2, a3: v75);
    v33 = *(_QWORD *)(v29 + 376612224);
    if ( v33 < 1 )
    {
      v74 = *(_QWORD *)(v29 + 376612224);
      v70[0] = 64;
      v73 = v70;
      MEMORY[0x11703ad8]/* 0x11703ad8 */(a1: v31, a2: v32, a3: v33, a4: v70);
      *(_QWORD *)(v29 + 376178856) = v73[1];
    }
    else
    {
      *(_QWORD *)(v29 + 376178856) = v33;
    }
    sub_1594F20();
    sub_15AA1E0();
    if ( v75 )
    {
      v36 = (unsigned int *)v76;
    }
    else
    {
      v36 = (unsigned int *)v76;
      LODWORD(v47) = *(_DWORD *)v76;
      if ( *(_DWORD *)v76 != 2 )
      {
        while ( (_DWORD)v47 == 1 )
        {
          _mm_pause();
          v47 = *v36;
          if ( *(int *)(v30 + 16) <= 0 )
            sub_277F280(a1: v34, a2: v35, a3: v47);
        }
        if ( (_DWORD)v47 == -1 )
        {
          if ( *(int *)(v30 + 16) <= 0 )
            sub_277F280(a1: v34, a2: v35, a3: v77);
          return 13;
        }
      }
    }
    if ( *(_QWORD *)(v29 + 376612208) == 1 )
    {
      sub_208BC20(a1: v34, a2: v35, a3: v29 + 376381032, a4: v36, a5: v29 + 376658376);
      sub_1EBDAE0();
    }
    sub_1592120(a1: v34, a2: v35, a3: v29 + 376612472, a4: v36);
    if ( v77 != 0 && *(int *)v77 >= 3 && *(_QWORD *)(v77 + 40) != 0 )
    {
      if ( *(int *)v77 < 4 )
      {
        v72 = false;
        v71 = 0;
      }
      else
      {
        v48 = *(_BYTE *)(v77 + 53) != 0;
        v72 = *(_BYTE *)(v77 + 52) != 0;
        v71 = v48;
      }
      v49 = sub_28364A0(a1: v37, a2: v38, a3: *(unsigned int *)(v77 + 32));
      if ( *(_DWORD *)(v29 + 376658396) != 0 )
        JUMPOUT(0x181EB7585LL);
      v52 = v29 + 376658392;
      *(_DWORD *)(v29 + 376658396) = (unsigned __int64)(v49 - v29) >> 3;
      if ( (*(_DWORD *)(v29 + 376658392) & 2) != 0 )
        goto LABEL_42;
      while ( v71 == 0 )
      {
        v69 = v49;
        v55 = sub_283CDA0(a1: v50, a2: v51, a3: v49, a4: 0, a5: v72);
        if ( v72 || v55 != v29 )
          goto LABEL_10;
        v49 = sub_2771080();
LABEL_42:
        v56 = v52 & 0xFFFFFFFFFFF80000LL;
        v57 = (v52 - ((v52 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(v56 + v57 + 56) != 0 )
          *(_BYTE *)(v56 + v57 + 56) = 0;
      }
      v69 = v49;
      v53 = sub_283CDA0(a1: v50, a2: v51, a3: v49, a4: v71, a5: v72);
      v54 = v29 + 376612712;
      *(_DWORD *)(v29 + 376612716) = (unsigned __int64)(v53 - v29) >> 3;
      if ( (*(_DWORD *)(v29 + 376612712) & 2) != 0 )
      {
        v58 = v54 & 0xFFFFFFFFFFF80000LL;
        v59 = (v54 - ((v54 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(v58 + v59 + 56) != 0 )
          *(_BYTE *)(v58 + v59 + 56) = 0;
      }
    }
LABEL_10:
    v39 = sub_2786940(a1: v37, a2: v38, a3: v29 + 376651888);
    if ( v75 )
    {
      if ( v39 != 0 )
        JUMPOUT(0x303D40F22LL);
      *(_DWORD *)v76 = -1;
      __faststorefence();
    }
    if ( v39 != 0 )
    {
      sub_1EB86C0(a1: v40, a2: v41, a3: v29 + 376614544);
      *(_BYTE *)(v29 + 376242736) = 1;
      sub_283AE00(a1: v42, a2: v43, a3: v29 + 376658344);
      sub_2780680(a1: v44, a2: v45, a3: v29 + 376658360);
      if ( *(int *)(v30 + 16) <= 0 )
        sub_277F280();
      return 0;
    }
    else
    {
      if ( *(int *)(v30 + 16) <= 0 )
        sub_277F280();
      return 13;
    }
  }
}
