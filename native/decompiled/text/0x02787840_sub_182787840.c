// sub_182787840
// rva 0x02787840  size 416  section .text  group text
// window base 0x182787840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182787840(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        unsigned int a6,
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
        int a18,
        int a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // edx
  int v25; // ecx
  int v26; // edi
  __int64 v27; // rsi
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, __int64, __int64, _QWORD, __int64, __int64); // r10
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  char v47[32]; // [rsp+0h] [rbp-88h] BYREF
  int v48; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+38h] [rbp-50h]
  _DWORD *v51; // [rsp+40h] [rbp-48h]
  char v52; // [rsp+48h] [rbp-40h] BYREF
  void *v53; // [rsp+50h] [rbp-38h]
  char *v54; // [rsp+58h] [rbp-30h]
  __int64 v55; // [rsp+60h] [rbp-28h]
  __int64 v56; // [rsp+70h] [rbp-18h]
  __int64 v57; // [rsp+78h] [rbp-10h]
  unsigned int v58; // [rsp+80h] [rbp-8h]
  unsigned int v59; // [rsp+84h] [rbp-4h]

  v59 = a1;
  if ( (unsigned __int64)v47 <= *(_QWORD *)(v22 + 8) )
  {
    MEMORY[0x181EB83C0]();
    return sub_1827879E0();
  }
  else
  {
    v58 = a6;
    v51 = a5;
    v50 = v21 + 376612728;
    v23 = sub_18277BB40(a1, a2, a3: v21 + 376612728, a4: (__int64)a5, a5);
    if ( v23 != 0 )
    {
      v30 = *(_QWORD *)(v21 + 373390664);
      v31 = v59;
      v53 = nullptr;
      v54 = nullptr;
      v55 = *(_QWORD *)(v22 + 56);
      *(_QWORD *)(v22 + 56) = &v52;
      v32 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64))MEMORY[0x10E444A8];
      v33 = v58;
      v48 = v31;
      v49 = 0;
      v57 = v23;
      v53 = &loc_1827878EC;
      v54 = v47;
      *(_DWORD *)(v22 + 20) = 3;
      v34 = v32(a1: v31, a2: v27, a3: v33, a4: 0, a5: v30, a6: v23);
      if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v22 + 20), 3, 1) == 3 )
      {
        *(_QWORD *)(v22 + 56) = *(_QWORD *)(*(_QWORD *)(v22 + 56) + 24LL);
        if ( v34 != 0 )
        {
          v56 = v34;
          sub_18278AEA0(a1: v35, a2: v36, a3: v34);
          if ( *(int *)(v22 + 16) <= 0 )
            sub_18277F280(a1: v40, a2: v41, a3: v39, a4: v56);
          return v57;
        }
        else
        {
          sub_18277D980(a1: v35, a2: v36, a3: v50, a4: 0, a5: v51, a6: v57, a7: v47[0]);
          if ( *(int *)(v22 + 16) <= 0 )
            sub_18277F280(a1: v45, a2: v46, a3: v43, a4: v44);
          return 0;
        }
      }
      else
      {
        return sub_182787999(
                 a1: v35,
                 a2: v36,
                 a3: 1,
                 a4: v34,
                 a5: v37,
                 a6: v38,
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
                 a20);
      }
    }
    else
    {
      return sub_182787953(
               a1: v26,
               a2: v27,
               a3: v24,
               a4: v25,
               a5: v28,
               a6: v29,
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
               a21);
    }
  }
}
