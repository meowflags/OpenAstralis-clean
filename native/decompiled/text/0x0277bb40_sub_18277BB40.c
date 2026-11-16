// sub_18277BB40
// rva 0x0277bb40  size 422  section .text  group text
// window base 0x18277bb40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277BB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64, __int64, __int64, __int64); // r10
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // r9d
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r8
  char v33[32]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+20h] [rbp-48h]
  _DWORD *v35; // [rsp+28h] [rbp-40h]
  char v36; // [rsp+30h] [rbp-38h] BYREF
  void *v37; // [rsp+38h] [rbp-30h]
  char *v38; // [rsp+40h] [rbp-28h]
  __int64 v39; // [rsp+48h] [rbp-20h]
  __int64 v40; // [rsp+58h] [rbp-10h]
  __int64 v41; // [rsp+60h] [rbp-8h]

  v35 = a5;
  if ( (unsigned __int64)v33 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB83C0]();
    goto LABEL_20;
  }
  v34 = v5 + 376658176;
  v7 = sub_182782EA0(a1, a2, a3: v5 + 376658176);
  v41 = v7;
  if ( v7 != 0 )
  {
    sub_1827836C0(a1: v10, a2: v11, a3: v34, a4: v9, a5: v7, a6: v5);
    v12 = v41 + 80;
    v37 = nullptr;
    v38 = nullptr;
    v39 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = &v36;
    v13 = (void (__fastcall *)(__int64, __int64, __int64, __int64))MEMORY[0x10E44720];
    v40 = v12;
    v37 = &loc_18277BBCA;
    v38 = v33;
    *(_DWORD *)(v6 + 20) = 3;
    v13(a1: v14, a2: v15, a3: v12, a4: v12);
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)(v6 + 20), 3, 1) == 3 )
      *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 24LL);
    else
      sub_18277F4A0(a1: v17, a2: v18, a3: 1, a4: v16, a5: 1);
    *(_DWORD *)(v41 + 328) = 1;
    sub_18278AD20(a1: v17, a2: v18, a3: v40);
    __sync_add_and_fetch((volatile signed __int32 *)(v5 + 376668604), 1);
    v24 = (int)v35;
    if ( v35 != (_DWORD *)v5 )
    {
      v25 = *v35 >> 3;
      if ( *(__int16 *)(v5 + 8 * v25 + 62) >= 3 )
      {
        v26 = *(unsigned int *)(v5 + 8 * v25 + 16);
        if ( *(_DWORD *)(v5 + 8 * v26 + 20) == 70129 )
        {
LABEL_10:
          if ( *(int *)(v6 + 16) <= 0 )
            sub_18277F280(a1: v21, a2: v22, a3: v26);
          return v41;
        }
      }
      v26 = (unsigned int)v35[3];
      if ( (_DWORD)v26 != 0 )
      {
        if ( *(_BYTE *)(v5 + 8 * v26 + 32) == 0 )
          v26 = (unsigned int)__sync_fetch_and_add((volatile signed __int32 *)(v5 + 376668436), 1u);
        goto LABEL_10;
      }
LABEL_21:
      sub_18276EFE0(a1: v21, a2: v22, a3: v26, a4: v41, a5: v24, a6: v23, a7: v33[0]);
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
      return sub_18277BD00(a1: v30, a2: v31, a3: v28, a4: v29, a5: v32);
    }
LABEL_20:
    sub_18276EFE0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v24, a6: v23, a7: v33[0]);
    goto LABEL_21;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    sub_18277F280(a1: v10, a2: v11, a3: v8);
  return 0;
}
