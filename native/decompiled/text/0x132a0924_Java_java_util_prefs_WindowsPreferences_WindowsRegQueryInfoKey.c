// Java_java_util_prefs_WindowsPreferences_WindowsRegQueryInfoKey
// rva 0x132a0924  size 265  section .text  group text
// window base 0x1932a0924: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegQueryInfoKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-49h] BYREF
  int *v17; // [rsp+20h] [rbp-29h]
  int *v18; // [rsp+28h] [rbp-21h]
  __int64 v19; // [rsp+30h] [rbp-19h]
  int *v20; // [rsp+38h] [rbp-11h]
  int *v21; // [rsp+40h] [rbp-9h]
  __int64 v22; // [rsp+48h] [rbp-1h]
  __int64 v23; // [rsp+50h] [rbp+7h]
  __int64 v24; // [rsp+58h] [rbp+Fh]
  int v25; // [rsp+60h] [rbp+17h] BYREF
  int v26; // [rsp+64h] [rbp+1Bh] BYREF
  int v27; // [rsp+68h] [rbp+1Fh] BYREF
  int v28; // [rsp+6Ch] [rbp+23h] BYREF
  _QWORD v29[6]; // [rsp+70h] [rbp+27h] BYREF

  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = &v28;
  v20 = &v26;
  v19 = 0;
  v18 = &v27;
  v17 = &v25;
  v29[1] = (int)MEMORY[0x79030](a1: a4, a2, a3: 0, a4: a5, a5: 0, a6: 0);
  v29[2] = v26;
  v29[3] = v27;
  v29[4] = v28;
  v6 = *v5;
  v29[0] = v25;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v6 + 1440))(a1: v5, a2: v7, a3: 5, a4: v5);
  if ( v9 != 0 )
  {
    v14 = *v10;
    v17 = (int *)v29;
    (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD, __int64))(v14 + 1696))(
      a1: v10,
      a2: v11,
      a3: v9,
      a4: v10,
      a5: 0,
      a6: 5);
  }
  return sub_1932C8DE0(a1: v10, a2: v11, a3: v8, a4: (unsigned __int64)&v16 ^ v29[5], a5: v12, a6: v13);
}
