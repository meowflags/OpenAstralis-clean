// sub_181EBC9A0
// rva 0x01ebc9a0  size 521  section .text  group text
// window base 0x181ebc9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBC9A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // r8d
  int v35; // r9d
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 i; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rsi
  char v71; // [rsp+0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+10h] [rbp-48h]
  __int64 v73; // [rsp+18h] [rbp-40h]
  __int64 v74; // [rsp+20h] [rbp-38h]
  __int64 v75; // [rsp+28h] [rbp-30h]
  unsigned int v76; // [rsp+34h] [rbp-24h]
  __int64 v77; // [rsp+38h] [rbp-20h]
  __int64 v78; // [rsp+40h] [rbp-18h]
  __int64 v79; // [rsp+48h] [rbp-10h]
  __int64 v80; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v71 <= *(_QWORD *)(v12 + 8) )
    goto LABEL_9;
  v80 = a5;
  v79 = a3;
  v78 = v11 + 376612880;
  MEMORY[0x182084840](a1, a2, a3: v11 + 376612880, a4: v11 + 365428256, a5: v11 + 365428256);
  v16 = MEMORY[0x182084840](a1: v14, a2: v15, a3: v78, a4: v13, a5: v79);
  v20 = MEMORY[0x182084840](a1: v18, a2: v19, a3: v16, a4: v17, a5: v11 + 372436952);
  v24 = MEMORY[0x182084840](a1: v22, a2: v23, a3: v20, a4: v21, a5: v80);
  MEMORY[0x1820841E0](a1: v25, a2: v26, a3: v24);
  v30 = v11 + 365347544;
  if ( *(_DWORD *)(v12 + 300) == 0 )
    goto LABEL_10;
  v77 = v11 + 365347544;
  MEMORY[0x182084840](a1: v28, a2: v29, a3: v78, a4: v27, a5: v11 + 365428184);
  v76 = *(_DWORD *)(v12 + 300);
  if ( v76 != 0 )
  {
    v74 = v11 + 8LL * v76;
    MEMORY[0x1820841E0](a1: v32, a2: v33, a3: v78);
    v73 = v11 + 373054984;
    v40 = MEMORY[0x182084840](a1: v38, a2: v39, a3: v78, a4: v37, a5: v11 + 373054984);
    v72 = v11 + 373045712;
    v43 = MEMORY[0x182084840](a1: v41, a2: v42, a3: v40, a4: v11 + 373045712, a5: v11 + 373045712);
    v46 = MEMORY[0x182084840](
            a1: v44,
            a2: v45,
            a3: v43,
            a4: v76,
            a5: v11 + 8LL * *(unsigned int *)(v11 + 8LL * v76 + 4));
    MEMORY[0x1820841E0](a1: v47, a2: v48, a3: v46);
    for ( i = v11 + 8LL * *(unsigned int *)(v11 + 8LL * v76 + 8); ; i = v11 + 8LL * *(unsigned int *)(v74 + 8) )
    {
      v74 = i;
      if ( i == v11 )
        break;
      MEMORY[0x1820841E0](a1: v49, a2: v50, a3: v78);
      v55 = MEMORY[0x182084840](a1: v53, a2: v54, a3: v78, a4: v52, a5: v73);
      v59 = MEMORY[0x182084840](a1: v57, a2: v58, a3: v55, a4: v56, a5: v72);
      v62 = MEMORY[0x182084840](a1: v60, a2: v61, a3: v59, a4: v74, a5: v11 + 8LL * *(unsigned int *)(v74 + 4));
      MEMORY[0x1820841E0](a1: v63, a2: v64, a3: v62);
    }
    v75 = i;
    MEMORY[0x182084840](a1: v49, a2: v50, a3: v78, a4: v78, a5: v77);
    MEMORY[0x1820841E0](a1: v65, a2: v66, a3: v78);
    while ( 1 )
    {
      MEMORY[0x182084840](a1: v28, a2: v29, a3: v78, a4: v27, a5: v77);
      MEMORY[0x1820841E0](a1: v67, a2: v68, a3: v78);
      MEMORY[0x1828C1C40](a1: v69, a2: v70, a3: v11 + 371979848);
LABEL_9:
      v80 = a5;
      v79 = a3;
      v30 = sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v71);
LABEL_10:
      v77 = v30;
    }
  }
  return sub_181EBCBA2(a1: v32, a2: v33, a3: v31, a4: v11, a5: v34, a6: v35, a7, a8, a9, a10, a11);
}
