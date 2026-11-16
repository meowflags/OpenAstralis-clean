// sub_4F2F080
// rva 0x04f2f080  size 223  section .text  group text
// window base 0x184f2f080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F2F080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]
  _DWORD *v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  _DWORD *v24; // [rsp+30h] [rbp-8h]

  v24 = a6;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v22 = a5;
    v23 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v7 )
  {
    v23 = a3;
    v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a5 >> 3) + 64]);
    v22 = a5;
    v21 = v9(a1, a2, a3: a5);
    if ( v24 == v7 )
    {
LABEL_9:
      sub_2771080();
      goto LABEL_10;
    }
    v12 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*v24 >> 3) + 64]))(
            a1: v10,
            a2: v11,
            a3: v24);
    v15 = v21;
    if ( (_DWORD *)v21 == v7 )
    {
LABEL_10:
      sub_2771080(a1: v13, a2: v14, a3: v23, a4: v15, a5: v22, a6: v24);
      __builtin_debugtrap();
      return sub_4F2F160();
    }
    v20 = v12;
    result = sub_4FE7FC0(a1: v13, a2: v14, a3: v7 + 93847156, a4: v21, a5: v21, a6: v12);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v17, a2: v18, a3: v21, a4: v20);
    return result;
  }
  v23 = a3;
  sub_2771080();
  goto LABEL_9;
}
