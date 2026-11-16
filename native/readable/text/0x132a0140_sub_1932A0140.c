// sub_132A0140
// rva 0x132a0140  size 587  section .text  group text
// window base 0x1932a0140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A0140(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 *a11)
{
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  _BYTE *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v38; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+8h] [rbp-B0h]
  __int64 v40; // [rsp+10h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A0h]
  _BYTE v42[96]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v43; // [rsp+80h] [rbp-38h]

  v13 = sub_1932CA1EB(a1: a4, a2: a5, a3, a4: 9);
  *v16 = v13;
  if ( v13 != 0 )
  {
    if ( (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(a1: v15, a2: v16, a3: 92, a4: (unsigned int)v15, a5: v42, a6: 86) == 0 )
      goto LABEL_7;
    if ( (unsigned int)sub_1329EEF0(
                         a1: v20,
                         a2: (__int64)v21,
                         a3: 533888,
                         a4: (__int64)v42,
                         a5: *v21,
                         a6: *v21 + 1,
                         a7: v38,
                         a8: v39,
                         a9: v40,
                         a10: v41) == 0 )
      goto LABEL_7;
    v22 = -1;
    do
      ++v22;
    while ( *(_BYTE *)(*v21 + v22) != 0 );
    if ( v22 != 4 )
LABEL_7:
      *(_BYTE *)*v21 = 0;
    v23 = sub_1932CA1EB(a1: v20, a2: v21, a3: v19, a4: 9);
    *a6 = v23;
    if ( v23 != 0 )
    {
      if ( (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(a1: v15, a2: v16, a3: 90, a4: (unsigned int)v15, a5: v23, a6: 9) == 0
        && (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(a1: v25, a2: v26, a3: 104, a4: (unsigned int)v25, a5: *a6, a6: 9) == 0 )
      {
        *(_BYTE *)*a6 = 0;
      }
      v27 = sub_1932CA1EB(a1: v25, a2: v26, a3: v24, a4: 9);
      *a3 = v27;
      if ( v27 != 0 )
      {
        if ( (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(a1: v15, a2: v16, a3: 89, a4: (unsigned int)v15, a5: v27, a6: 9) == 0
          && (unsigned int)__imp_KERNEL32.dll!GetLocaleInfoA(a1: v29, a2: v30, a3: 103, a4: (unsigned int)v29, a5: *a3, a6: 9) == 0 )
        {
          v31 = *a3;
          *(_WORD *)v31 = MEMORY[0x82574]/* 0x82574 */;
          *(_BYTE *)(v31 + 2) = MEMORY[0x82576]/* 0x82576 */;
          v28 = *a6;
          *(_WORD *)v28 = MEMORY[0x82598]/* 0x82598 */;
          *(_BYTE *)(v28 + 2) = MEMORY[0x8259a]/* 0x8259a */;
        }
        v32 = (_BYTE *)sub_1932CA1EB(a1: v29, a2: v30, a3: v28, a4: 9);
        *a11 = (__int64)v32;
        if ( v32 != nullptr )
        {
          *v32 = 0;
          v33 = *a3;
          if ( *(_BYTE *)*a3 == 110 )
          {
            if ( *(_BYTE *)(v33 + 1) != 98 || *(_BYTE *)(v33 + 2) != 0 )
            {
              if ( *(_BYTE *)v33 == 110 && *(_BYTE *)(v33 + 1) == 110 && *(_BYTE *)(v33 + 2) == 0 )
              {
                *(_WORD *)v33 = MEMORY[0x82578]/* 0x82578 */;
                *(_BYTE *)(v33 + 2) = MEMORY[0x8257a]/* 0x8257a */;
                v35 = *a6;
                *(_WORD *)v35 = MEMORY[0x8259c]/* 0x8259c */;
                *(_BYTE *)(v35 + 2) = MEMORY[0x8259e]/* 0x8259e */;
                v36 = *a11;
                *(_WORD *)v36 = MEMORY[0x8257c]/* 0x8257c */;
                *(_BYTE *)(v36 + 2) = MEMORY[0x8257e]/* 0x8257e */;
              }
            }
            else
            {
              *(_WORD *)v33 = MEMORY[0x82578]/* 0x82578 */;
              *(_BYTE *)(v33 + 2) = MEMORY[0x8257a]/* 0x8257a */;
              v34 = *a6;
              *(_WORD *)v34 = MEMORY[0x8259c]/* 0x8259c */;
              *(_BYTE *)(v34 + 2) = MEMORY[0x8259e]/* 0x8259e */;
            }
          }
        }
      }
    }
  }
  return sub_132C8DE0(a1: v15, a2: v16, a3: v14, a4: (unsigned __int64)&v38 ^ v43, a5: v17, a6: v18);
}
