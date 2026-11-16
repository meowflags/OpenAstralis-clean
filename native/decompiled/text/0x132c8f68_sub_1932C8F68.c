// sub_1932C8F68
// rva 0x132c8f68  size 131  section .text  group text
// window base 0x1932c8f68: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932C8F68(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10)
{
  int v10; // ebx
  int v12; // edx
  char v13; // bl
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned int v31; // ebx
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // esi
  int v36; // r8d
  int v37; // r9d
  int v38; // [rsp+40h] [rbp+8h]

  v38 = v10;
  LOBYTE(a1) = a4;
  if ( MEMORY[0x337838] <= 0 )
    return 0;
  --MEMORY[0x337838];
  v13 = sub_1932C9460(a1);
  if ( MEMORY[0x337DB0] == 2 )
  {
    sub_1932C9588();
    sub_1932C9958();
    sub_1932C9B1C(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23);
    MEMORY[0x337DB0] = 0;
    LOBYTE(v24) = v13;
    sub_1932C972C(a1: v26, a2: v27, a3: v25, a4: v24);
    LOBYTE(v29) = v28;
    v31 = (unsigned __int8)sub_1932C9750(a1: v28, a2: v30, a3: 0, a4: v29);
    sub_1932C95B8();
    return v31;
  }
  else
  {
    sub_1932C9994(a1: v14, a2: v15, a3: v12, a4: 7, a5: v16, a6: v17);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1932C8FEC(a1: v34, a2: v35, a3: v32, a4: v33, a5: v36, a6: v37, a7: v38, a8, a9, a10);
  }
}
