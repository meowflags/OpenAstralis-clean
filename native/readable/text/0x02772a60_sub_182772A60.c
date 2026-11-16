// sub_2772A60
// rva 0x02772a60  size 1045  section .text  group text
// window base 0x182772a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2772A60(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // r11
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // [rsp+8h] [rbp-B0h]
  __int64 v32; // [rsp+10h] [rbp-A8h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+60h] [rbp-58h]
  unsigned int (__fastcall *v37)(__int64, __int64, _DWORD *, __int64, __int64, __int64); // [rsp+68h] [rbp-50h]
  unsigned __int64 v38; // [rsp+70h] [rbp-48h]
  unsigned __int64 v39; // [rsp+78h] [rbp-40h]
  unsigned __int64 v40; // [rsp+80h] [rbp-38h]
  unsigned __int64 v41; // [rsp+88h] [rbp-30h]
  __int64 v42; // [rsp+90h] [rbp-28h]
  __int64 v43; // [rsp+90h] [rbp-28h]

  if ( (unsigned int)sub_2772760(a1, a2, (__int64)a3, a4: a5, a5) == 0 )
    return 1;
  v18 = a3[11];
  v19 = a3[9];
  v20 = a3[10];
  if ( v20 == 0 )
    return sub_182772C87(a1, a2: v16, a3: (_DWORD)a6, a4: v19, a5: v18, a6: v19, a7, a8, a9, a10, a11, a12, a13, a14);
  v42 = a3[11];
  v21 = *(_QWORD *)(v15 + 373390496);
  v41 = v21;
  v22 = *(_QWORD *)(v15 + 373390504);
  v40 = v22;
  v39 = v21 + *(int *)(v15 + 373390492);
  v38 = v22 + *(int *)(v15 + 373390512);
  v16 = v14 + *(_QWORD *)(v15 + 8LL * (*a6 >> 3) + 128);
  v37 = (unsigned int (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))v16;
  if ( v21 <= v19 && v19 <= v21 + *(int *)(v15 + 373390492) || v22 <= v19 && v19 <= v22 + *(int *)(v15 + 373390512) )
  {
LABEL_6:
    v23 = a5;
    v24 = (__int64)a3;
    while ( (unsigned int)sub_2772760(a1: v21, a2: v16, a3: v24, a4: v19, a5: v23) != 0 )
    {
      v18 = a3[11];
      v19 = a3[9];
      v20 = a3[10];
      if ( v20 == 0 )
        return sub_182772C87(
                 a1,
                 a2: v16,
                 a3: (_DWORD)a6,
                 a4: v19,
                 a5: v18,
                 a6: v19,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14);
      v21 = v41;
      if ( v41 > v19 || v19 > v39 )
      {
        if ( v40 <= v19 && v19 <= v38 )
        {
          v23 = a5;
          v24 = (__int64)a3;
        }
        else
        {
          v43 = a3[9];
          v35 = a3[11];
          v31 = v15
              + 8LL * *(unsigned int *)sub_15A85E0(a1: v41, a2: v16, a3: *(_QWORD *)(v20 + 176), a4: v19, a5: 0);
          if ( v37(a1: v20, a2: a1, a3: a6, a4: v25, a5: v35, a6: v43) == 0 )
          {
            v30 = v31;
            goto LABEL_22;
          }
          sub_15AE5C0(a1: v27, a2: v28, a3: v20, a4: v26, a5: v31);
          v23 = a5;
          v24 = (__int64)a3;
        }
      }
      else
      {
        v23 = a5;
        v24 = (__int64)a3;
      }
    }
    return 1;
  }
  v36 = a3[9];
  v32 = v15 + 8LL * *(unsigned int *)sub_15A85E0(a1: v21, a2: v16, a3: *(_QWORD *)(v20 + 176), a4: v19, a5: 0);
  if ( v37(a1: v20, a2: a1, a3: a6, a4: v29, a5: v42, a6: v36) != 0 )
  {
    sub_15AE5C0(a1: v27, a2: v28, a3: v20, a4: v26, a5: v32);
    goto LABEL_6;
  }
  v30 = v32;
LABEL_22:
  sub_15AE5C0(a1: v27, a2: v28, a3: v20, a4: v26, a5: v30);
  return 0;
}
