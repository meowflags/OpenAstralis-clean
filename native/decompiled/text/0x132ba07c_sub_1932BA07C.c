// sub_1932BA07C
// rva 0x132ba07c  size 491  section .text  group text
// window base 0x1932ba07c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BA07C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        __int64 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  _BYTE *v32; // rax
  int v33; // eax
  __int64 *v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  int v44; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+8h] [rbp-C0h]
  __int64 v46; // [rsp+10h] [rbp-B8h]
  __int64 v47; // [rsp+18h] [rbp-B0h]
  _BYTE v48[96]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+80h] [rbp-48h]

  v13 = MEMORY[0x79AD0](a1: a3, a2: a4, a3, a4: 9);
  *a5 = v13;
  if ( v13 != 0 )
  {
    if ( (unsigned int)MEMORY[0x795A8](a1: v15, a2: v16, a3: 92, a4: (unsigned int)v16, a5: v48, a6: 86) == 0
      || (unsigned int)sub_19329EEF0(
                         a1: v20,
                         a2: v21,
                         a3: 533888,
                         a4: (__int64)v48,
                         a5: *a5,
                         a6: *a5 + 1,
                         a7: v44,
                         a8: v45,
                         a9: v46,
                         a10: v47) == 0
      || sub_1932CA1FD(a1: v20, a2: v21, a3: v19, a4: *a5) != 4 )
    {
      *(_BYTE *)*a5 = 0;
    }
    v22 = MEMORY[0x79AD0](a1: v20, a2: v21, a3: v19, a4: 9);
    *a6 = v22;
    if ( v22 != 0 )
    {
      if ( (unsigned int)MEMORY[0x795A8](a1: v15, a2: v16, a3: 90, a4: (unsigned int)v16, a5: v22, a6: 9) == 0
        && (unsigned int)MEMORY[0x795A8](a1: v24, a2: v25, a3: 104, a4: (unsigned int)v25, a5: *a6, a6: 9) == 0 )
      {
        *(_BYTE *)*a6 = 0;
      }
      v26 = MEMORY[0x79AD0](a1: v24, a2: v25, a3: v23, a4: 9);
      *v15 = v26;
      if ( v26 != 0 )
      {
        if ( (unsigned int)MEMORY[0x795A8](a1: v15, a2: v16, a3: 89, a4: (unsigned int)v16, a5: v26, a6: 9) == 0
          && (unsigned int)MEMORY[0x795A8](a1: v28, a2: v29, a3: 103, a4: (unsigned int)v29, a5: *v28, a6: 9) == 0 )
        {
          sub_1932CA27B(a1: v28, a2: v29, a3: 533876, a4: *v28);
          sub_1932CA27B(a1: v30, a2: v31, a3: 533912, a4: *a6);
        }
        v32 = (_BYTE *)MEMORY[0x79AD0](a1: v28, a2: v29, a3: v27, a4: 9);
        *a11 = (__int64)v32;
        if ( v32 != nullptr )
        {
          *v32 = 0;
          v33 = sub_1932CA1F7(a1: v15, a2: v16, a3: 545424, a4: *v15);
          v36 = *v34;
          if ( v33 == 0 )
          {
            sub_1932CA27B(a1: v34, a2: v35, a3: 533880, a4: v36);
            v39 = *a6;
            v40 = 533916;
LABEL_19:
            sub_1932CA27B(a1: v37, a2: v38, a3: v40, a4: v39);
            return sub_1932C8DE0(a1: v15, a2: v16, a3: v14, a4: (unsigned __int64)&v44 ^ v49, a5: v17, a6: v18);
          }
          if ( (unsigned int)sub_1932CA1F7(a1: v34, a2: v35, a3: 545428, a4: v36) == 0 )
          {
            sub_1932CA27B(a1: v15, a2: v16, a3: 533880, a4: *v15);
            sub_1932CA27B(a1: v41, a2: v42, a3: 533916, a4: *a6);
            v39 = *a11;
            v40 = 533884;
            goto LABEL_19;
          }
        }
      }
    }
  }
  return sub_1932C8DE0(a1: v15, a2: v16, a3: v14, a4: (unsigned __int64)&v44 ^ v49, a5: v17, a6: v18);
}
