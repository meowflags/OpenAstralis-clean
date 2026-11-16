// sub_1E9E6A0
// rva 0x01e9e6a0  size 294  section .text  group text
// window base 0x181e9e6a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9E6A0(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rsi
  double v23; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  __int64 v30; // rdx
  int v31; // edx
  int v32; // ecx
  int v33; // edi
  int v34; // esi
  int v35; // r8d
  int v36; // r9d
  char v37; // [rsp+0h] [rbp-18h] BYREF
  __int64 v38; // [rsp+8h] [rbp-10h]
  unsigned int v39; // [rsp+10h] [rbp-8h]
  unsigned int v40; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v20 + 8) )
  {
    v23 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v37);
LABEL_27:
    sub_276EAE0(a1: v21, a2: v22, a3: v38, a4: v26, a5: v39, a6: v40, a7: v23);
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
    return sub_1E9E7E0(
             a1: v33,
             a2: v34,
             a3: v31,
             a4: v32,
             a5: v35,
             a6: v36,
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
             a19);
  }
  v40 = a6;
  v39 = a5;
  v38 = a3;
  sub_1E785A0();
  v24 = *(unsigned int *)(v19 + 376653328);
  if ( (_DWORD)v24 == 47076562 )
    v25 = v19;
  else
    v25 = v19 + 8 * v24;
  if ( v25 != v19 )
  {
    v26 = *(_DWORD *)v25 >> 3;
    if ( (_DWORD)v26 != 4261917 )
      goto LABEL_27;
  }
  if ( v25 == v19 )
    v27 = 0;
  else
    v27 = *(unsigned __int8 *)(v25 + 4);
  if ( v40 != 0 && (_DWORD)v27 == 0 )
  {
    if ( *(int *)(v20 + 16) <= 0 )
      sub_277F280(a1: v21, a2: v22, a3: v38, a4: v27, a5: v39);
    return 1;
  }
  else
  {
    v28 = v39;
    if ( v39 != 0 || (_DWORD)v27 == 0 )
    {
      if ( *(int *)(v20 + 16) <= 0 )
      {
        sub_277F280(a1: v21, a2: v22, a3: v38, a4: v27);
        v38 = v30;
      }
      if ( v28 != 0 )
        return *(unsigned __int8 *)(v38 + 24);
      else
        return 0;
    }
    else
    {
      if ( *(int *)(v20 + 16) <= 0 )
        sub_277F280(a1: v21, a2: v22, a3: v38);
      return 0;
    }
  }
}
