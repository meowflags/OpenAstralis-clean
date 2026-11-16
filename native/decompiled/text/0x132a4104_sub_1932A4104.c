// sub_1932A4104
// rva 0x132a4104  size 226  section .text  group text
// window base 0x1932a4104: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A4104(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v13; // rax
  void (__fastcall *v14)(__int64 *, __int64, __int64, __int64 *, _QWORD, __int64); // r10
  __int64 *v15; // rdi
  __int64 v16; // rax
  void (__fastcall *v17)(__int64 *, __int64, __int64, __int64 *, _QWORD, __int64); // r10
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // [rsp+0h] [rbp-178h] BYREF
  char *v31; // [rsp+20h] [rbp-158h]
  int v32; // [rsp+30h] [rbp-148h] BYREF
  __int16 v33; // [rsp+38h] [rbp-140h]
  char v34; // [rsp+40h] [rbp-138h] BYREF
  __int16 v35; // [rsp+B8h] [rbp-C0h]
  char v36; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+140h] [rbp-38h]

  v32 = a11;
  v13 = *a4;
  v33 = 23;
  v14 = *(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD, __int64))(v13 + 1600);
  v31 = &v34;
  v14(a1: a4, a2: a3, a3: a6, a4, a5: 0, a6: 16);
  v16 = *v15;
  v35 = 23;
  v17 = *(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD, __int64))(v16 + 1600);
  v31 = &v36;
  v17(a1: v15, a2: v18, a3: a12, a4: v15, a5: 0, a6: 16);
  v21 = sub_1932A2CC4(a1: v19, a2: v20, a3: v20);
  LODWORD(v31) = 264;
  MEMORY[0x799F0](a1: v22, a2: v23, a3: 41, a4: v21, a5, a6: &v32);
  return sub_1932C8DE0(a1: v25, a2: v26, a3: v24, a4: (unsigned __int64)&v30 ^ v37, a5: v27, a6: v28);
}
