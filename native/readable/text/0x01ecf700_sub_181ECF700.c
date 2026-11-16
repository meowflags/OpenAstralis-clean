// sub_1ECF700
// rva 0x01ecf700  size 1445  section .text  group text
// window base 0x181ecf700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ECF700(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 (*v15)(void); // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 i; // rax
  char v38; // [rsp+0h] [rbp-68h] BYREF
  int v39; // [rsp+8h] [rbp-60h]
  BOOL v40; // [rsp+10h] [rbp-58h]
  _DWORD *v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  __int64 v43; // [rsp+30h] [rbp-38h]
  _DWORD *v44; // [rsp+38h] [rbp-30h]
  unsigned int v45; // [rsp+44h] [rbp-24h]
  __int64 v46; // [rsp+48h] [rbp-20h]
  __int64 v47; // [rsp+50h] [rbp-18h]
  __int64 v48; // [rsp+58h] [rbp-10h]
  BOOL v49; // [rsp+64h] [rbp-4h]

  v48 = a6;
  if ( (unsigned __int64)&v38 <= *(_QWORD *)(v14 + 8) )
  {
    v47 = a1;
    v46 = a5;
    v44 = a3;
    sub_1EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v38);
    while ( 1 )
    {
      for ( i = v35; ; i = v35 )
      {
        while ( 1 )
        {
          v28 = sub_2769900(a1: v33, a2: v34, a3: i, a4: v36, a5: &a7);
          v31 = *(_QWORD *)(v14 + 40);
          if ( (unsigned __int64)(v31 + 40) > *(_QWORD *)(v14 + 32) )
          {
            v43 = v28;
            v31 = sub_1EAA920(a1: v29, a2: v30, a3: 36449800);
            v28 = v43;
          }
          else
          {
            *(_QWORD *)(v14 + 40) = v31 + 40;
            *(_DWORD *)v31 = 36449800;
            *(_DWORD *)(v31 + 4) = 0;
            *(_QWORD *)(v31 + 8) = 0;
            *(_QWORD *)(v31 + 16) = 0;
            *(_QWORD *)(v31 + 24) = 0;
            *(_QWORD *)(v31 + 32) = 0;
          }
          *(_DWORD *)(v31 + 20) = 46923644;
          *(_DWORD *)(v31 + 16) = *(_DWORD *)(v13 + 374343896);
          *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - v13) >> 3;
          v32 = *(unsigned int *)(v28 + 8);
          v43 = v28;
          v42 = v13 + 8 * v32;
          v45 = v32;
          v41 = (_DWORD *)v31;
          sub_503B9A0(a1: v29, a2: v30, a3: v31, a4: v32, a5: 0);
          v35 = (unsigned __int64)v41;
          v36 = v45;
          v41[2] = v45;
          if ( (*(_DWORD *)v35 & 2) != 0 )
            break;
          i = v35;
        }
        v36 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v36) >> 9) + 0x38) == 0 )
          break;
        *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v36) >> 9) + 0x38) = 0;
      }
    }
  }
  v47 = a1;
  v46 = a5;
  v45 = *a3 >> 3;
  v15 = (__int64 (*)(void))(v12 + *(_QWORD *)(v13 + 8LL * v45 + 112));
  v44 = a3;
  v16 = v15();
  v21 = *(_QWORD *)(v14 + 40);
  v22 = v21 + 24;
  if ( (unsigned __int64)(v21 + 24) > *(_QWORD *)(v14 + 32) )
    return sub_181ECF7FB(a1: v18, a2: v19, a3: v21, a4: v17, a5: v22, a6: v20, a7, a8, a9, a10, a11, a12);
  *(_QWORD *)(v14 + 40) = v22;
  *(_DWORD *)v21 = 40470016;
  *(_DWORD *)(v21 + 4) = 0;
  *(_QWORD *)(v21 + 8) = 0;
  *(_QWORD *)(v21 + 16) = 0;
  v49 = v16 != v13;
  v43 = v21;
  v42 = v13 + 376659936;
  sub_27B6000(a1: v18, a2: v19, a3: v21, a4: v13 + 376659936, a5: v47, a6: v13);
  v25 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v12 + *(_QWORD *)(v13 + 8LL * v45 + 144)))(
          a1: v23,
          a2: v24,
          a3: v44);
  v26 = *(unsigned __int8 *)(v48 + 20);
  v39 = *(unsigned __int8 *)(v48 + 22);
  v40 = v49;
  result = sub_278EDE0(a1: v25, a2: v46, a3: v42, a4: v26, a5: v43, a6: v49);
  if ( *(int *)(v14 + 16) <= 0 )
    return sub_277F280();
  return result;
}
