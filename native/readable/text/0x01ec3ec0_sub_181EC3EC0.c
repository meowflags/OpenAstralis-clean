// sub_1EC3EC0
// rva 0x01ec3ec0  size 592  section .text  group text
// window base 0x181ec3ec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC3EC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        int a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        int a25,
        char a26)
{
  __int64 v26; // r13
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rbx
  int v53; // edi
  int v54; // esi
  int v55; // r8d
  int v56; // r9d
  unsigned int v57; // ecx
  _DWORD v59[10]; // [rsp-1Ch] [rbp-D0h] BYREF
  __int64 v60; // [rsp+Ch] [rbp-A8h]
  __int64 v61; // [rsp+14h] [rbp-A0h]
  __int64 v62; // [rsp+1Ch] [rbp-98h]
  __int64 v64; // [rsp+34h] [rbp-80h]
  unsigned int *v65; // [rsp+3Ch] [rbp-78h]
  __int64 v66; // [rsp+64h] [rbp-50h]
  __int64 v67; // [rsp+6Ch] [rbp-48h]
  __int64 v68; // [rsp+74h] [rbp-40h]
  char v69; // [rsp+7Ch] [rbp-38h] BYREF
  _DWORD *v70; // [rsp+84h] [rbp-30h]
  __int64 v71; // [rsp+8Ch] [rbp-28h]
  __int64 v72; // [rsp+94h] [rbp-20h]
  __int64 v73; // [rsp+9Ch] [rbp-18h]
  unsigned int v74; // [rsp+A8h] [rbp-Ch]
  __int64 v75; // [rsp+ACh] [rbp-8h]

  v75 = a5;
  if ( (unsigned __int64)&v69 <= *(_QWORD *)(v28 + 8) )
  {
    v73 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v69);
  }
  else if ( a3 != v27 )
  {
    v74 = *(_DWORD *)(a3 + 12);
    v29 = v27 + 8LL * v74;
    if ( v74 != 0 )
    {
      v73 = a3;
      v72 = v27 + 8LL * v74;
      v71 = sub_4FFACC0(a1, a2, a3: v72, a4: v29, a5: 46, a6: 47);
      v32 = *(_QWORD *)(v28 + 40);
      if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v28 + 32) )
      {
        v32 = sub_1EAA920(a1: v30, a2: v31, a3: 35802856);
      }
      else
      {
        *(_QWORD *)(v28 + 40) = v32 + 40;
        *(_DWORD *)v32 = 35802856;
        *(_DWORD *)(v32 + 4) = 0;
        *(_QWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 16) = 0;
        *(_QWORD *)(v32 + 24) = 0;
        *(_QWORD *)(v32 + 32) = 0;
      }
      v70 = (_DWORD *)v32;
      *(_DWORD *)(v32 + 20) = 46923644;
      *(_DWORD *)(v32 + 16) = *(_DWORD *)(v27 + 374343896);
      *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v27) >> 3;
      sub_503B9A0(a1: v30, a2: v31, a3: v32, a4: v32, a5: 0);
      v35 = (unsigned __int64)v70;
      v70[2] = (unsigned __int64)(v71 - v27) >> 3;
      if ( (*(_DWORD *)v35 & 2) != 0 )
      {
        v41 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v41) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v41) >> 9) + 0x38) = 0;
      }
      if ( v75 == v27 )
        goto LABEL_9;
      while ( 1 )
      {
        sub_503CF20(a1: v33, a2: v34, a3: v70);
        sub_2769900(a1: v37, a2: v38, a3: v70, a4: v36, a5: &a7);
LABEL_9:
        v39 = *(_QWORD *)(v28 + 40);
        if ( (unsigned __int64)(v39 + 40) > *(_QWORD *)(v28 + 32) )
        {
          v39 = sub_1EAA920(a1: v33, a2: v34, a3: 36450760);
        }
        else
        {
          *(_QWORD *)(v28 + 40) = v39 + 40;
          *(_DWORD *)v39 = 36450760;
          *(_DWORD *)(v39 + 4) = 0;
          *(_QWORD *)(v39 + 8) = 0;
          *(_QWORD *)(v39 + 16) = 0;
          *(_QWORD *)(v39 + 24) = 0;
          *(_QWORD *)(v39 + 32) = 0;
        }
        *(_DWORD *)(v39 + 20) = 46923644;
        *(_DWORD *)(v39 + 16) = *(_DWORD *)(v27 + 374343896);
        *(_DWORD *)(v39 + 12) = (unsigned __int64)(v39 - v27) >> 3;
        v71 = v39;
        sub_503B9A0(a1: v33, a2: v34, a3: v39, a4: v35, a5: 0);
        v40 = v71;
        *(_DWORD *)(v71 + 8) = v74;
        if ( (*(_DWORD *)v40 & 2) != 0 )
        {
          v42 = (v40 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v42) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v42) >> 9) + 0x38) = 0;
        }
        *(_DWORD *)(v40 + 12) = 0;
      }
    }
LABEL_21:
    sub_2771080(a1, a2, a3, a4: v29);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    v65 = (unsigned int *)v43;
    if ( (unsigned __int64)v59 <= *(_QWORD *)(v28 + 8) )
      JUMPOUT(0x181EC48D7LL);
    if ( v27 + 376659264 == v43 )
    {
      if ( *(int *)(v28 + 16) <= 0 )
        JUMPOUT(0x181EC48B1LL);
      return v27 + 370996184;
    }
    else
    {
      v46 = *(unsigned int *)(v43 + 4);
      v47 = v27 + 8 * v46;
      v64 = v47;
      v68 = 34082368;
      v48 = v27 + 353301280;
      if ( *(_BYTE *)(v43 + 20) != 0 )
      {
        if ( (_DWORD)v46 == 0 )
          JUMPOUT(0x181EC4745LL);
        v67 = 34082880;
        v66 = 34082680;
        v61 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v26
                                                                 + *(_QWORD *)(v27
                                                                             + 8LL * (*(_DWORD *)(v27 + 8 * v46) >> 3)
                                                                             + 104)))(
                a1: v48,
                a2: 34082880,
                a3: v47);
        v51 = v65[2];
        v52 = v65[3];
        if ( (_DWORD)v52 == 0 )
          JUMPOUT(0x181EC4765LL);
        v64 = v27 + 8 * v51;
        v59[7] = v51;
        v60 = v27 + 8 * v52;
        v62 = sub_4F6D020(a1: v49, a2: v50, a3: v60);
        v57 = v65[4];
        if ( v57 == 0 )
          JUMPOUT(0x181EC4730LL);
        return sub_181EC4215(
                 a1: v53,
                 a2: v54,
                 a3: (unsigned int)v27 + 8 * v57,
                 a4: (unsigned int)v27 + 8 * v57,
                 a5: v55,
                 a6: v56,
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
                 a24);
      }
      else
      {
        return sub_181EC4543(
                 a1: v48,
                 a2: 34082880,
                 a3: v43,
                 a4: v47,
                 a5: v44,
                 a6: v45,
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
                 a26);
      }
    }
  }
  sub_2771080();
  goto LABEL_21;
}
