// sub_1ED8DE0
// rva 0x01ed8de0  size 282  section .text  group text
// window base 0x181ed8de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1ED8DE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // ebx
  void (__fastcall *v24)(_QWORD, _DWORD *, _DWORD *, _QWORD, __int64, __int64); // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  char v30; // [rsp+0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+10h] [rbp-38h]
  __int64 v32; // [rsp+18h] [rbp-30h]
  __int64 v33; // [rsp+20h] [rbp-28h]
  __int64 v34; // [rsp+28h] [rbp-20h]
  _DWORD *v35; // [rsp+30h] [rbp-18h]
  unsigned int v36; // [rsp+38h] [rbp-10h]
  unsigned int v37; // [rsp+3Ch] [rbp-Ch]
  unsigned int v38; // [rsp+40h] [rbp-8h]
  unsigned int v39; // [rsp+44h] [rbp-4h]

  v35 = (_DWORD *)a3;
  v34 = a1;
  v39 = a4;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v16 + 8) )
  {
    v33 = a2;
    v38 = a6;
    v37 = a5;
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v30);
    goto LABEL_9;
  }
  if ( (int)a5 <= (int)a6 )
  {
    if ( *(int *)(v16 + 16) <= 0 )
      sub_181ED8EA3(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    return;
  }
  v38 = a6;
  v37 = a5;
  v33 = a2;
  v32 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, _QWORD))loc_181ED8FE0)(
          a1,
          a2,
          a3: a1,
          a4,
          a5: a2,
          a6: (unsigned int)a4);
  v20 = sub_1ED9120(a1: v18, a2: v19, a3: v34, a4: v17, a5: v33, a6: v39);
  v21 = v34;
  v22 = v39;
  if ( v39 >= *(_DWORD *)(v34 + 8) )
  {
LABEL_9:
    sub_276F0E0(a1: v21, a2: v33, a3: v35, a4: v22, a5: v37, a6: v38);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1ED8F00(a1: v27, a2: v28, a3: v25, a4: v26, a5: v29);
    return;
  }
  v23 = *(_DWORD *)(v34 + 8LL * v39 + 16);
  v24 = (void (__fastcall *)(_QWORD, _DWORD *, _DWORD *, _QWORD, __int64, __int64))(v14
                                                                                  + *(_QWORD *)(v15
                                                                                              + 8LL * (*v35 >> 3)
                                                                                              + 112));
  v31 = v20;
  v36 = v23;
  v24(a1: v23, a2: v35, a3: v35, a4: v39, a5: v32, a6: v20);
  if ( *(int *)(v16 + 16) <= 0 )
    sub_277F280();
}
