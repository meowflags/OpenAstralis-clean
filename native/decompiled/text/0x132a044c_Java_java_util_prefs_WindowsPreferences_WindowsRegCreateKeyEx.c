// Java_java_util_prefs_WindowsPreferences_WindowsRegCreateKeyEx
// rva 0x132a044c  size 286  section .text  group text
// window base 0x1932a044c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_java_util_prefs_WindowsPreferences_WindowsRegCreateKeyEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v21; // [rsp+0h] [rbp-98h] BYREF
  _QWORD *v22; // [rsp+20h] [rbp-78h]
  int v23; // [rsp+28h] [rbp-70h]
  __int64 v24; // [rsp+30h] [rbp-68h]
  __int64 *v25; // [rsp+38h] [rbp-60h]
  unsigned int *v26; // [rsp+40h] [rbp-58h]
  unsigned int v27; // [rsp+50h] [rbp-48h] BYREF
  __int64 v28; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v29[7]; // [rsp+60h] [rbp-38h] BYREF

  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a4 + 1472LL))(
          a1: a4,
          a2,
          a3: a6,
          a4,
          a5: 0);
  if ( v10 != 0 )
  {
    v26 = &v27;
    v25 = &v28;
    v24 = 0;
    v23 = 131097;
    LODWORD(v22) = 0;
    v14 = (int)MEMORY[0x79050](a1: v9, a2: v10, a3: v10, a4: a5, a5: 0, a6: 0);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v13 + 1536LL))(
      a1: v13,
      a2: v15,
      a3: a6,
      a4: v13,
      a5: v15,
      a6: 0);
    v29[2] = v27;
    v17 = *v16;
    v29[0] = v28;
    v29[1] = v14;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v17 + 1440))(
            a1: v16,
            a2: 3,
            a3: 3,
            a4: v16);
    if ( v18 != 0 )
    {
      v19 = *v9;
      v22 = v29;
      (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *, _QWORD, _QWORD))(v19 + 1696))(
        a1: v9,
        a2: v10,
        a3: v18,
        a4: v9,
        a5: 0,
        a6: (unsigned int)v10);
    }
  }
  return sub_1932C8DE0(a1: v9, a2: v10, a3: v8, a4: (unsigned __int64)&v21 ^ v29[3], a5: v11, a6: v12);
}
