#!/bin/bash

for team_dir in submissions/*; do
    team=$(basename "$team_dir")
    build_dir="build_$team"

    echo "🔧 Testing $team..."

    # Generate build files
    cmake -DTEAM="$team" -S . -B "$build_dir" >/dev/null

    # Build the executable
    cmake --build "$build_dir" --target DSA_L11 >/dev/null

    echo "🚀 Running $team:"
    "$build_dir/DSA_L11"
    echo ""

    # Clean up build directory
    echo "🧹 Cleaning build for $team..."
    rm -rf "$build_dir"
    echo ""
done