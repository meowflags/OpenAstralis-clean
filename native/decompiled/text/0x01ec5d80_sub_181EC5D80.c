// sub_181EC5D80
// rva 0x01ec5d80  size 722  section .text  group text
// window base 0x181ec5d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC5D80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // ebp
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 result; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  char v41; // [rsp+0h] [rbp-38h] BYREF
  __int64 v42; // [rsp+8h] [rbp-30h]
  __int64 v43; // [rsp+10h] [rbp-28h]
  __int64 v44; // [rsp+18h] [rbp-20h]
  __int64 v45; // [rsp+20h] [rbp-18h]
  int v46; // [rsp+2Ch] [rbp-Ch]
  int v47; // [rsp+30h] [rbp-8h]
  unsigned int v48; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v12 + 8) )
  {
    v44 = a3;
    v19 = sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v41);
    goto LABEL_19;
  }
  v13 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v13 == 0 )
    return sub_181EC5F04(a1, a2, a3, a4: v11, a5, a6, a7, a8, a9, a10);
  v44 = a3;
  v45 = v11 + 8 * v13;
  v14 = MEMORY[0x184FA82E0](a1, a2, a3: v45);
  if ( v14 == v11 )
    v18 = v11 + 353301280;
  else
    v18 = v14;
  v43 = v18;
  v19 = MEMORY[0x1850132E0](a1: v16, a2: v17, a3: 27, a4: v15, a5: v18);
  v10 = *(char *)(v43 + 12);
  v21 = v10;
  v22 = (unsigned int)(v19 << *(_BYTE *)(v43 + 12));
  if ( (int)v22 < 0 )
  {
LABEL_19:
    v48 = v10;
    v47 = v19;
    v36 = *(_QWORD *)(v12 + 40);
    if ( (unsigned __int64)(v36 + 40) > *(_QWORD *)(v12 + 32) )
    {
      v46 = v22;
      v36 = sub_181EAA920(a1: v20, a2: v22, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v12 + 40) = v36 + 40;
      *(_DWORD *)v36 = 34082880;
      *(_DWORD *)(v36 + 4) = 0;
      *(_QWORD *)(v36 + 8) = 0;
      *(_QWORD *)(v36 + 16) = 0;
      *(_QWORD *)(v36 + 24) = 0;
      *(_QWORD *)(v36 + 32) = 0;
      v46 = v22;
    }
    *(_DWORD *)(v36 + 20) = 46923644;
    *(_DWORD *)(v36 + 16) = *(_DWORD *)(v11 + 374343896);
    *(_DWORD *)(v36 + 12) = (unsigned __int64)(v36 - v11) >> 3;
    v42 = v36;
    MEMORY[0x18503B9A0](a1: v20, a2: v22, a3: v36, a4: v21, a5: 0);
    v40 = v42;
    *(_DWORD *)(v42 + 8) = 46004603;
    if ( (*(_DWORD *)v40 & 2) != 0 )
      goto LABEL_24;
    goto LABEL_22;
  }
  v46 = *(char *)(v43 + 12);
  v23 = *(_QWORD *)(v12 + 40);
  v24 = ((unsigned int)v22 + 19LL) & 0x1FFFFFFF8LL;
  v25 = 34082368;
  if ( v24 >= 0x20000 || (v24 += v23, v24 > *(_QWORD *)(v12 + 32)) )
  {
    v48 = v10;
    v47 = v19;
    v23 = sub_181EAA840(a1: v24, a2: v22, a3: 34082368, a4: 34082368, a5: v22);
    v10 = v48;
  }
  else
  {
    *(_QWORD *)(v12 + 40) = v24;
    *(_QWORD *)v23 = 34082368;
    *(_DWORD *)(v23 + 8) = v22;
    v47 = v19;
  }
  v42 = v23;
  v48 = v10;
  MEMORY[0x184FF2C40](a1: v10, a2: v23, a3: v11 + 58179056, a4: v25, a5: v23, a6: 0);
  MEMORY[0x184FF2C40](a1: v48, a2: v27, a3: v43, a4: v26, a5: v42, a6: 26);
  v30 = v43;
  v31 = *(unsigned int *)(v43 + 4);
  if ( (_DWORD)v31 == 0 )
  {
    while ( 1 )
    {
      v40 = MEMORY[0x182771080](a1: v28, a2: v29, a3: v30, a4: v31, a5: v42);
LABEL_24:
      v37 = (v40 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v37) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v40 & 0xFFFFFFFFFFF80000LL) + ((v40 - v37) >> 9) + 0x38) = 0;
LABEL_22:
      MEMORY[0x182769900](a1: v38, a2: v39, a3: v40, a4: v37, a5: &a7);
    }
  }
  MEMORY[0x184FF2C40](
    a1: v48,
    a2: v29,
    a3: v11 + 58179080,
    a4: (unsigned int)*(char *)(v43 + 12),
    a5: v42,
    a6: (unsigned int)((*(_DWORD *)(v11 + 8 * v31 + 8) >> *(_BYTE *)(v43 + 12)) + 26));
  result = *(_QWORD *)(v12 + 40);
  if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v12 + 32) )
  {
    result = sub_181EAA920(a1: v32, a2: v33, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v12 + 40) = result + 24;
    *(_DWORD *)result = 34082680;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
    *(_QWORD *)(result + 16) = 0;
  }
  v35 = v42;
  *(_BYTE *)(result + 12) = v46;
  *(_DWORD *)(result + 4) = (unsigned __int64)(v35 - v11) >> 3;
  if ( *(int *)(v12 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
