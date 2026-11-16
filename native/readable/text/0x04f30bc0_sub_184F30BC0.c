// sub_4F30BC0
// rva 0x04f30bc0  size 255  section .text  group text
// window base 0x184f30bc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F30BC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  BOOL v16; // ecx
  __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // eax
  _QWORD v24[2]; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v25; // [rsp+10h] [rbp-28h]
  int v26; // [rsp+1Ch] [rbp-1Ch]
  __int64 v27; // [rsp+20h] [rbp-18h]
  int v28; // [rsp+28h] [rbp-10h]
  BOOL v29; // [rsp+2Ch] [rbp-Ch]
  __int64 (__fastcall *v30)(__int64, __int64, _DWORD *); // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)v24 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a5;
    sub_1EB84E0();
    goto LABEL_12;
  }
  v27 = a3;
  if ( a5 == v6 )
  {
LABEL_12:
    sub_2771080();
    goto LABEL_13;
  }
  v8 = *(_QWORD *)&v6[2 * (*a5 >> 3) + 64];
  v26 = *a5 >> 3;
  v30 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + v8);
  v25 = a5;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + v8))(a1, a2, a3: a5);
  v10 = *(_QWORD *)&v6[2 * v26 + 66];
  v24[1] = v9;
  v13 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + v10))(a1: v11, a2: v12, a3: v25);
  v16 = v13 == 3;
  v29 = v16;
  if ( v13 == 2 )
  {
    v28 = 2;
    v19 = v30(a1: v14, a2: v15, a3: v25);
    if ( (_DWORD *)v19 != v6 )
    {
      v23 = sub_4FEBC20(a1: v21, a2: v22, a3: v19, a4: v20, a5: 0);
      v17 = v27;
      if ( *(unsigned __int16 *)(v27 + 4) != v23 )
        JUMPOUT(0x309E46C8CLL);
      v16 = true;
      goto LABEL_5;
    }
LABEL_13:
    sub_2771080(a1: v21, a2: v22, a3: v27, a4: v20, a5: v25);
    __builtin_debugtrap();
    return sub_4F30CC0();
  }
  v28 = v13;
  v17 = v27;
LABEL_5:
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v14, a2: v15, a3: v17);
  return v16;
}
