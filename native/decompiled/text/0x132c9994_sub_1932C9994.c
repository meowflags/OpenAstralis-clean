// sub_1932C9994
// rva 0x132c9994  size 331  section .text  group text
// window base 0x1932c9994: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C9994(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD a5,
        _DWORD a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  void *v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  _QWORD v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v36[4]; // [rsp+50h] [rbp-B0h] BYREF
  void *v37; // [rsp+60h] [rbp-A0h]
  _BYTE v38[152]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v39; // [rsp+188h] [rbp+88h]
  void *v40; // [rsp+1E8h] [rbp+E8h]
  void *retaddr; // [rsp+5C8h] [rbp+4C8h]

  a7 = v8;
  if ( (unsigned int)MEMORY[0x79518](a1, a2, a3, a4: 23) != 0 )
    __fastfail(a4);
  sub_1932C9988(a1: v11, a2: v12, a3: v10, a4: 3);
  sub_1932CA161(a1: v13, a2: v14, a3: 0, a4: v38, a5: 1232);
  MEMORY[0x79548](a1: v16, a2: v17, a3: v15, a4: v38);
  v18 = v40;
  v21 = MEMORY[0x79550](a1: v19, a2: v20, a3: &a8, a4: v40, a5: 0);
  if ( v21 != 0 )
    MEMORY[0x79558](a1: v22, a2: v23, a3: a8, a4: 0, a5: v18, a6: v21);
  v40 = retaddr;
  v39 = &a7;
  sub_1932CA161(a1: v22, a2: v23, a3: 0, a4: v36, a5: 152);
  v37 = retaddr;
  v36[0] = 1073741845;
  v36[1] = 1;
  v24 = MEMORY[0x79578]();
  v35[0] = v36;
  v35[1] = v38;
  MEMORY[0x796B0](a1: v26, a2: v27, a3: v25, a4: 0);
  result = MEMORY[0x79560](a1: v29, a2: v30, a3: v28, a4: v35);
  if ( (_DWORD)result == 0 && v24 != 1 )
    return sub_1932C9988(a1: v33, a2: v34, a3: v32, a4: 3);
  return result;
}
